//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{

    public:
    int repeatedStringMatch(string a, string b) 
    {
        // Your code goes here
        string s=a;
        int cnt=1;
        while(s.size()<b.size()){
            s+=a;
            cnt++;
        }
        
        if(s.find(b)!=-1){
            return cnt;
        }
        s+=a;
        cnt++;
        if(s.find(b)!=-1){
            return cnt;
        }
        return -1;
    }
  
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution obj;
        cout<<obj.repeatedStringMatch(A,B)<<"\n";
    }
    return 0;
}

// } Driver Code Ends