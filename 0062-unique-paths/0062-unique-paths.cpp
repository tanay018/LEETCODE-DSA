class Solution {
    private: 
    int countpath(int i, int j, vector<vector<int>>&dp,int n,int m){
      if(i==(n-1) && j==(m-1)) return 1;
      if(i>=n ||j>=m) return 0;
      if(dp[i][j]!=-1) return dp[i][j];
      dp[i][j]=countpath(i+1,j,dp,n,m)+countpath(i,j+1,dp,n,m);
      return dp[i][j];
    }
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(n, vector<int>(m, -1));
        return countpath(0,0,dp,n,m);
       
    }
};