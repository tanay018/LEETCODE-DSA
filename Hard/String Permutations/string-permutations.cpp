//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    
     private:
    void solve(vector<string>& ans,string s,int index){
        if(index>=s.length()){
            ans.push_back(s);
            return ;
        }
        
        
        for(int j=index;j<s.length();j++){
            swap(s[index],s[j]);
            solve(ans,s,index+1);
            //backtrak
            swap(s[index],s[j]);
        }
    }
    public:
    //Complete this function
    
    vector<string> permutation(string s)
    {
        //Your code here
        vector<string> ans;
		    solve(ans,s,0);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
    
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends