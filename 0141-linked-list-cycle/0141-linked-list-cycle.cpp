/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
       
        // int cnt=1;
        // int cnt2=1;
        // if(temp==NULL) {return -1;}

        // while(temp->next!=NULL){
        //      cnt++;
        //     temp=temp->next;
        //     if(cnt>=10001){
        //          return true;
        //     }
        //     return false;
            
        // }

       ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
           if(fast==slow) return true;
        }
         
        return false;
        // ListNode* temp2=head;
        // while(cnt!=0){
            
        //     temp=temp->next;
        //      cnt2++;
        //      cnt--;
            
        // }
        // if(cnt2==cnt) return false;
        return false;
    }
};