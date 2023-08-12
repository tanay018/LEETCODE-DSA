// class Solution {
//      private: 
//     int countpath(int i, int j, vector<vector<int>>&dp,int n,int m,vector<vector<int>> og){
//          if(i>=0 && j>=0 && og[i][j]==1 ) return 0;
//       if(i==(n-1) && j==(m-1)) return 1;
//       if(i>=n ||j>=m) return 0;
//       if(dp[i][j]!=-1) return dp[i][j];
//       dp[i][j]=countpath(i+1,j,dp,n,m,og)+countpath(i,j+1,dp,n,m,og);
//       return dp[i][j];
//     }
// public:
//     int uniquePathsWithObstacles(vector<vector<int>>& og) {
//         int m=og.size();
//         int n=og[0].size();
//         vector<vector<int>>dp(n, vector<int>(m, -1));
//         return countpath(0,0,dp,n,m,og);
       
//     }
// };
class Solution {
public:
    int solve(int m, int n, vector<vector<int>> &grid, vector<vector<int>> &dp){
        if(m>=0 && n>=0 && grid[m][n] == 1){
            return 0;
        }

        if(m== 0 && n==0){
            return 1;
        }

        if(m<0 || n<0){
            return 0;
        }

        if(dp[m][n] != -1){
            return dp[m][n];
        }

        
        int up = solve(m-1, n, grid, dp);
        int left = solve(m, n-1, grid, dp);

        return dp[m][n] = up+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        vector<vector<int>> dp(m, vector<int>(n, -1));
        return solve(m-1, n-1, obstacleGrid, dp);
        
    }
};