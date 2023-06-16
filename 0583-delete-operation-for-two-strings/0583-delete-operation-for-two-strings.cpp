class Solution {
public:
 vector<vector<int>> dp;
    int minDistance(string word1, string word2) {
         dp.resize(word1.length(),vector<int>(word2.length(),-1));
        return word1.size()+word2.size()-2*lcs(word1,word2,0,0);
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