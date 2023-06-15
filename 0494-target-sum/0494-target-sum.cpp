class Solution {
    private:
    int solve(vector<int>& nums, int target,int index,int ans){

        // target bhi tabhi 0 hona chahiye jab index last tak aa gaya ho
       
        if(index==nums.size() && target==0){
            return 1;
        }
      
        if(index>=nums.size()){
            return 0;
        }

        int p=solve(nums,target-nums[index],index+1,ans);
        int m=solve(nums,target+nums[index],index+1,ans);
        return ans= m+p;
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int ans=0;
        return solve(nums,target,0,ans);
    }
};