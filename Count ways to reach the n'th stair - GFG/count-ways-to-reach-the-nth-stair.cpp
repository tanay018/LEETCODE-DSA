//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    private:
    int solve(int n,int ind,vector<int>& dp){
        if(ind==n){
            return 1;
        }
         if (ind > n) {
            return 0;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int one=solve(n,ind+1,dp)%m;
        int two=solve(n,ind+2,dp)%m;
        return dp[ind]=one+two;
    }
    public:
    //Function to count number of ways to reach the nth stair.
     long long int m = 1e9 + 7;
    int countWays(int n)
    {
         vector<int> dp(n+1,-1);
        int ans= solve(n,0,dp);
        return ans%m;
        // your code here
    }
    
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends