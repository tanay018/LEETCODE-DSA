//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
    int solve(string a, set<string>&b,int index,vector<int>dp){
        if(index==a.size()) return 1;
        if(dp[index]!=-1) return dp[index];
        string temp;
        for(int i=index;i<a.size();i++){
            temp+=a[i];
            if(b.find(temp)!=b.end()){
                if(solve(a,b,i+1,dp))return dp[index]=1;
            }
        }
        return dp[index]=0;
    }
    int wordBreak(string a, vector<string> &b) {
        //code here
        set<string>bb;
        vector<int>dp(1111,-1); // size of a+1
        for(auto word : b) bb.insert(word);
        return solve(a,bb,0,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}

// } Driver Code Ends