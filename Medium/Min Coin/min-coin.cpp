//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
	int solve(int index,int amount,vector<int>nums,int cnt,vector<vector<int>>dp){
	    if(amount==0){
	        return cnt;
	    }
	    if(index==0){
	        if(amount%nums[0]==0){
	            return amount/nums[0];
	        }
	        else{
	            return 1E9;
	        }
	    }
	    if(dp[index][amount]!=-1){
	        return dp[index][amount];
	    }
	    
	    int nottake=0+solve(index-1,amount,nums,cnt,dp);
	    int take = INT_MAX;
	    if(amount>=nums[index]) take=1+solve(index,amount-nums[index],nums,cnt,dp);
	    return dp[index][amount]=min(take,nottake);
	}
	int MinCoin(vector<int>nums, int amount)
	{
	    // Code here
	   // int cnt=0;
	    
	    vector<vector<int>>dp(nums.size(),vector<int>(amount+1,0));
	    //int a=solve(nums.size()-1,amount,nums,cnt,dp);
	   // if(a==1E9) return -1;
	   // return a;
	   
	   for(int target=0;target<=amount;target++){
	       if(target%nums[0]==0){
	            dp[0][target]=target/nums[0];
	       }
	      else{
	          dp[0][target]=1e9;
	      }
	   }
	   for (int index=1;index<nums.size();index++){
	       for(int target=0;target<=amount;target++){
	            
	    int nottake=0+dp[index-1][target];
	    int take = INT_MAX;
	    if(target>=nums[index]){
	        take=1+dp[index][target-nums[index]];}
	  dp[index][target]=min(take,nottake);
	       }
	   }
	   int ans=dp[nums.size()-1][amount];
	   if(ans>=1e9) return -1;
	   return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, amount;
		cin >> n >> amount;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.MinCoin(nums, amount);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends