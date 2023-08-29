//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution

{
    private:
    void solve(set<string>& ans,string s,int index){
        if(index>=s.length()){
            ans.insert(s);
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
		vector<string>find_permutation(string s)
		{
		    // Code here there
		   set<string> ans;
		    solve(ans,s,0);
		    vector<string > result;

      for (auto it :ans){

          result.push_back(it);

      }
		    return result;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends