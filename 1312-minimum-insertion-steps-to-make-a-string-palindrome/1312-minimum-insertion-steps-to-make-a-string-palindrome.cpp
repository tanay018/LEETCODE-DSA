class Solution {
public:
vector<vector<int>> dp;
    int minInsertions(string s) {
        string text2;
        string text1=s;
        reverse(s.begin(),s.end());
        text2=s;
        if(text1==text2) return 0;
        dp.resize(text1.length(),vector<int>(text2.length(),-1));
       
        return s.size()-lcs(text1,text2,0,0);
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