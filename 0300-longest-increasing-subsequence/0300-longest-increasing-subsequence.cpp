class Solution {
public:

//n+1 coz prev -1 se n-1 tak jayega
    int solve(int n,vector<int>& nums,int curr,int prev ,vector<vector<int>>& dp){
        //base
        if(curr==n){
            return 0;
        }
        if(dp[curr][prev+1]!=-1){
            return dp[curr][prev+1];
        }

        //include 
        int inc=0;
        if(prev==-1 || nums[curr]>nums[prev]){
           inc= 1+ solve(n,nums,curr+1,curr,dp);
        }
        //exclude
       
        int exc= 0+solve(n,nums,curr+1,prev,dp);

        return dp[curr][prev+1]=max(inc,exc);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n= nums.size();
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        
        return solve(n,nums,0,-1,dp);
    }
};