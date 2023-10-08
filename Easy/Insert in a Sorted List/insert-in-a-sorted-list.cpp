//{ Driver Code Starts
//

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
}

// } Driver Code Ends
/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        // if (head->data>data){
        //     Node *temp=new Node(data);
        //     temp->next=head;
        //     return temp;
        // }
        
        //     Node *trial=head;
        //     Node *temp=new Node(data);
        //     while(trial->next!=NULL){
        //         if(trial->data<data && trial->next->data>data){
        //             trial->next=temp;
        //             temp->next=trial->next;
        //              return head;
        //         }
        //         trial=trial->next;
        //     }
        //      trial->next=temp;
        // temp->next=NULL;
        //     return head;
        
        if(head->data>data){
            Node* newnode=new Node(data);
            newnode->next=head;
            head=newnode;
            return head;
        }
        
        Node* n =new Node(data);
        Node* temp = head;
        while(temp->next!=NULL){
            if(temp->data<=data && temp->next->data>=data){
                Node* newtemp = temp->next;
                temp->next = n;
                n->next = newtemp;
                return head;
            }
            temp = temp->next;
        }
        temp->next=n;
        n->next=NULL;
        return head;
    }
};


//{ Driver Code Starts.
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
        
		int data;
		cin>>data;
		
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		
		int k;
		cin>>k;
		Solution obj;
		head = obj.sortedInsert(head,k);
		printList(head); 
	}
	return 0; 
} 

// } Driver Code Ends