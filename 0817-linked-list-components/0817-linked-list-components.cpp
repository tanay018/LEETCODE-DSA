
class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        if(!head) return 0;
        if(!head->next) return 1;
        
        int count = 0;
        bool consecutive=false;
        while(head){
            if(find(nums.begin(), nums.end(), head->val) != nums.end()){
                if(!consecutive) count++;
                consecutive = true;
            }else{
                consecutive = false;
            }
            
            head = head->next;
        }
        
        return count;
    }
};