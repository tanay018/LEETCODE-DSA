//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        if(N==1)return 0;
        long long a=N;
        long long sum=1;
        for(int i=2;i<=sqrt(a);i++){
            if(a%i==0){
                sum+=i;
                sum+=(a/i);
            }
            if(sum>a) return 0;
        }
        if(sum==a) return 1;
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends