// class Solution {

//     private:
//     int solve(string& a, string& b, int i, int j,vector<vector<int> >& dp){
//         if(i >= a.length())
//           { return 0;}
//         if(j >= b.length())
//          {  return 0;}

//         if(dp[i][j]!=-1){
//                return dp[i][j];
//            }

//         int ans = 0;
//         if(a[i]==b[i]){
//             ans= 1+ solve(a,b,i+1,j+1,dp);
//         }
//         else {
//             ans = max(solve(a,b,i+1, j,dp), solve(a,b,i,j+1,dp));
//         }
        
//            return dp[i][j] = ans;
//     }

// public:
//     int longestCommonSubsequence(string text1, string text2) {
//         vector<vector<int> > dp(text1.length(), vector<int>(text2.length(), -1));
//          return solve(text1, text2, 0, 0,dp);
//     }
// };

class Solution {
public:
    vector<vector<int>> dp;
    int longestCommonSubsequence(string text1, string text2) {
        dp.resize(text1.length(),vector<int>(text2.length(),-1));
        return lcs(text1,text2,0,0);
    }
    int lcs(string& a,string& b,int i,int j)
    {
        if(i>=a.length() || j>=b.length())
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        if(a[i]==b[j])
            dp[i][j]=1+lcs(a,b,i+1,j+1);
        else
            dp[i][j]=max(lcs(a,b,i,j+1),lcs(a,b,i+1,j));
        
        return dp[i][j];
    }
};