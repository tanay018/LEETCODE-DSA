/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        priority_queue<int,vector<int>,greater<int>>pq;
        int n= lists.size();
        for(int i=0;i<n;i++){
            ListNode* temp=lists[i];
            while(temp!=NULL){
                // cout<<temp->val<<" ";
                pq.push(temp->val);
                temp=temp->next;
            }
        }
       // ListNode* start = new ListNode(pq.top());
       ListNode* start = NULL;
        ListNode* end = NULL;
        while(!pq.empty()) {
            if(start==NULL)
            {
                start = new ListNode(pq.top());
                end = start;
                pq.pop();
            }
            else{
                end->next = new ListNode(pq.top());
                pq.pop();
                end = end->next;
            }
        }
        return start;
    }
};