// class Solution {
// public:
// //n+1 coz prev -1 se n-1 tak jayega
//     int solve(int n,vector<int>& nums,int curr,int prev ,vector<vector<int>>& dp,int& cnt){
//         //base
       
//         if(curr==n){
//             return 0;
            
//         }
//         if(dp[curr][prev+1]!=-1){
//             return dp[curr][prev+1];
//         }

//         //include 
//         int inc=0;
//         if(prev==-1 || nums[curr]>nums[prev]){
//            inc= 1+ solve(n,nums,curr+1,curr,dp,cnt);
          
//                    }
//         //exclude
       
//         int exc= 0+solve(n,nums,curr+1,prev,dp,cnt);

//         return dp[curr][prev+1]=max(inc,exc);
//     }
//     int findNumberOfLIS(vector<int>& nums) {
//          int n= nums.size();
//         vector<vector<int>> dp(n,vector<int>(n+1,-1));
//         int cnt;
//         solve(n,nums,0,-1,dp,cnt);
//         return cnt;
//     }
// };
class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();

        vector<int> dp(n,1) , cnt(n,1);

        int maxi = 1;
        for(int i = 0 ; i < n ; i++){
            for(int prev = 0 ; prev < i ; prev++){
                if(nums[prev] < nums[i] and dp[prev] + 1 > dp[i]){
                    dp[i] = dp[prev] + 1;
                    cnt[i] = cnt[prev];//  copy pate cnt
                }
                else if(nums[prev] < nums[i] and dp[prev] + 1 == dp[i]){ 
                    cnt[i]+=cnt[prev];// add
                }
            }
            maxi = max(maxi,dp[i]);
        }

        int ans = 0;

        for(int i = 0 ; i < n ; i++){
            if(dp[i] == maxi) ans+=cnt[i];
        }

        return ans;
    }
};