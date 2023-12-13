//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	#define mod 1000000007
	ll countStrings(int n) {
	    // code here
	    vector<ll>dp(100001,0);
        dp[0]=1;
        dp[1]=2;
        for(int i=2;i<=n;i++){
            dp[i]=(dp[i-1]%mod+dp[i-2]%mod)%mod;
        }
        return dp[n]%mod;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends