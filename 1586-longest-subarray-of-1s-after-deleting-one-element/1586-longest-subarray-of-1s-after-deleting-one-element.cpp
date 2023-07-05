class Solution {
public:
    int longestSubarray(vector<int>& nums) {
          int left=0;
        int right=0;
        int n=nums.size();
        int zero=0;
        int ans=INT_MIN;
        int k=1;
        while(right<n){
            if(nums[right]==0){
                zero++;
            }
            while(zero>k){
                if(nums[left]==0){
                    zero--;
                }
                left++;
            }
            ans=max(ans,right-left+1);
            right++;
            
        }
        return ans-1;
 
    }
};