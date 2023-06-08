class Solution {
     private:
    # define mod 1000000007
int solve(long long nStairs, vector<int>& dp){
if(nStairs<=1) return 1;
if(dp[nStairs]!=-1) return dp[nStairs];


dp[nStairs]= (solve(nStairs-1,dp)+solve(nStairs-2,dp));

return dp[nStairs];
}
public:
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};

// class Solution {
//     private:
//     # define mod 1000000007
// int solve(long long nStairs,int i){
// if(i==nStairs) return 1;
// if(i>nStairs) return 0;

// return (solve(nStairs,i+1)+solve(nStairs,i+2))%mod;
// }
// public:
//     int climbStairs(int nStairs) {
       
//      return solve(nStairs,0);
//     }
// };

