class Solution {
    int solve( int i,vector<int>& s,int cnt,int n,vector<vector<int>>&dp){
        //base
     if(i>=n){
         return 0;
     }
     if(dp[i][cnt]!=-1){
         return dp[i][cnt];
     }
     //include
     int inc=s[i]*(cnt) + solve(i+1,s,cnt+1,n,dp);

     //exclude
     int exc=solve(i+1,s,cnt,n,dp);
     dp[i][cnt]=max(inc,exc);

      return dp[i][cnt];
         }
public:
    int maxSatisfaction(vector<int>& s) {
        sort(s.begin(),s.end());
       int i=0;
       int cnt=1;
       int n=s.size();
      vector<vector<int>> dp(n , vector<int>(n+1,-1));
       return solve(i,s,cnt,n,dp); 
    }
};