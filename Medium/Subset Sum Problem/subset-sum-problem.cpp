//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:

    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n=arr.size();
        vector<vector<bool>> dp(n, vector<bool> (sum+1, 0));
        
        for(int i=0;i<n;i++)
        {
            dp[i][0]=1;
        }
        if(arr[0]<=sum)
            dp[0][arr[0]]=1;
            
        for(int ind=1;ind<n;ind++)
        {
            for(int tar=1;tar<=sum;tar++)
            {
                bool nt = dp[ind-1][tar];
                bool t=t;
                if(arr[ind] <=tar)
                    t = dp[ind-1][tar - arr[ind]];
                dp[ind][tar] = nt | t;
            }
        }
        return dp[n-1][sum];
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends