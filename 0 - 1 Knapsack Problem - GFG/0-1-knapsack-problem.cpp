//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    
    
    // int solve(int index,int w,int wt[], int val[], vector<vector<int>>dp){
       
    //     if(index==0){
    //         if(wt[0]<=w){
    //             return val[0];
    //         }
    //         else{
    //             return 0;
    //         }
    //     }
    //     if(dp[index][w]!=-1){
    //         return dp[index][w];
    //     }
        
    //     int nottake=0+solve(index-1,w,wt,val,dp);
    //     int take =INT_MIN;
    //     if(wt[index]<=w){
    //         take=val[index]+solve(index-11,w-wt[index],wt,val,dp);
    //     }
    //   return dp[index][w]=max(take,nottake);
         
    // }
    
    
    int knapSack(int w, int wt[], int val[], int n) 
    { 
       // Your code here
          vector<vector<int>>dp(n,vector<int>(w+1,0));
       //int ans=solve(n-1,w,wt,val,dp);
      // return ans;
     
     // TABU
    //  for(int W=wt[0];W<=w;W++){
    //      dp[0][W]=val[0];
    //  }
    //  for(int index =1;index<n;index++){
    //      for(int W=0; W<=w;W++){
             
    //          int nottake=0+dp[index-1][W];
    //     int take =INT_MIN;
    //     if(wt[index]<=W){
    //         take=val[index]+dp[index-1][W-wt[index]];
    //     }
    //   dp[index][W]=max(take,nottake);
         
    //      }
    //  }
    //  return dp[n-1][w];
    
    vector<int>prev(w+1,0);
    vector<int>curr(w+1,0);
    
      for(int W=wt[0];W<=w;W++){
        prev[W]=val[0];
     }
     for(int index =1;index<n;index++){
         for(int W=0; W<=w;W++){
             
             int nottake=0+prev[W];
        int take =INT_MIN;
        if(wt[index]<=W){
            take=val[index]+prev[W-wt[index]];
        }
       curr[W]=max(take,nottake);
         
         }
         prev = curr;
     }
     return prev[w];
   
      
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends