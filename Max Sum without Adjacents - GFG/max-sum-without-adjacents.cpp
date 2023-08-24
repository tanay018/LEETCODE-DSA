//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
// 	int solve(int *arr,int n,int sum,int i){
// 	    if(i==n || i==n-1) return sum;
	    
// 	    sum +=arr[i];
// 	}
	int findMaxSum(int *arr, int n) {
	    // code here
	   // int sum=0;
	   // return solve(arr[],n,sum,0)
	   vector<int> dp(n,0);
	   dp[0] = arr[0];
   dp[1] = arr[1];
   dp[2] = arr[0]+arr[2];
   for(int i = 3; i < n ; i++){
       dp[i] = max(dp[i-2],dp[i-3])+arr[i];
   }
   return max(dp[n-1],dp[n-2]);
	}

    

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends