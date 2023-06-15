class Solution {
public:
 bool solve(int index ,vector<int>& nums, int n,int target,vector<vector<int> >& dp) {
         if(n<=index)
          { return 0;}
         if(target<0)
          { return 0;}
         if(target==0)
           { return 1; }

         if(dp[index] [target] != -1){
              return dp[index] [target];
           }
          

        //include
        bool inc=solve(index+1,nums,n,target-nums[index],dp);

        //exclude
        bool exc=solve(index+1,nums,n,target,dp);

        return dp[index] [target]=inc or exc;


 }
public:
    bool canPartition(vector<int>& nums) {
         int n=nums.size();
       
       int total = 0;
      
    for(int i=0; i<n; i++){
      total += nums[i];
     }
        if(total & 1) {return 0;}
        int target=total/2;
         vector<vector<int> > dp(n, vector<int>(target+1, -1));
        return solve(0, nums, n,target,dp);
    }
};