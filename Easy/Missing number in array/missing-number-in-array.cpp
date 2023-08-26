//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& arr, int n) {
          sort(arr.begin(), arr.end());
        
        if (arr[0] != 1) return 1;
        if (arr[n-2] != n) return n;
        
        for (int i = 1; i < n; i++){
            if (arr[i] != arr[i-1] + 1){
                return arr[i - 1] + 1;
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends