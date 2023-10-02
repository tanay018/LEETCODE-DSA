//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int toyCount(int n, long long k, vector<int> arr)
    {
        // code here
        sort(arr.begin(),arr.end());
        long long cnt=0;
         
       for(long long i=0;i<n;i++){
            
            k=k-arr[i];
            
            if(k<0){
                return cnt;
            }
            cnt++;
            if(k==0){
                return cnt;
            }
        }
        
        return cnt;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K;
        cin>>N>>K;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.toyCount(N, K, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends