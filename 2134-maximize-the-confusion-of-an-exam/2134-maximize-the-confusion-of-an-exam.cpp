class Solution {
public:
int solve(string nums, int k,char a){
     int left=0;
        int right=0;
        int n=nums.length();
        int zero=0;
        int ans=INT_MIN;
        
        while(right<n){
            if(nums[right]==a){
                zero++;
            }
            while(zero>k){
                if(nums[left]==a){
                    zero--;
                }
                left++;
            }
            ans=max(ans,right-left+1);
            right++;
            
        }
        return ans;
}
    int maxConsecutiveAnswers(string nums, int k) {
        char a='T';
        int aaa= solve(nums,k,a);
        char b='F';
        int bbb=solve(nums,k,b);
        return max(aaa,bbb);
    }
};