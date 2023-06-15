//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    private:
    int solve(vector<vector<int>>& points, int day,int last,vector<vector<int>>&dp)
  {
   
   if(day<0)
   {
       return 0;
   }
  
   if(dp[day][last]!=-1)
   {
       return dp[day][last];
   }
   
   
       int realmax=0;
      for(int i=0;i<3;i++)
      {
         
          if(i!=last)
          {
            int activity=points[day][i]+solve(points,day-1,i,dp);
               realmax=max(realmax,activity);
          }
      }
      
      return dp[day][last]=realmax;
   
  }
  public:
    int maximumPoints(vector<vector<int>>& points, int n) {
        // Code here
        vector<vector<int>>dp(n,vector<int>(4,-1));
        return solve(points,n-1,3,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> points;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            points.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(points, n) << endl;
    }
    return 0;
}
// } Driver Code Ends