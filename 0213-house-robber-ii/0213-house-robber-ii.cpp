// class Solution {
//     private:
// int solveTab (vector<int> &nums){
//       int n=nums.size();
//     //  vector<int> dp(n,0);
//     //     dp[0]=nums[0];
//     //    // dp[1]=nums[0];
//     //     for(int i=1;i<n;i++){
//     //         int inc=dp[i-2]+nums[i];
//     //         int exc=dp[i-1]+0;
//     //         dp[i]=max(inc,exc);
//     //     }
//     //     return dp[n-1];
         
// int prev2 = 0;
// int prev1 = nums [0];
// for(int i=1; i<n; i++) {
// int incl= prev2 + nums [i];
// int excl= prev1 + 0;
// int ans= max (incl, excl);
// prev2 = prev1;
// prev1 = ans;
// }

// return prev1;

// }


// public:
//     int rob(vector<int>& nums) {
      
//         int n=nums.size();
//         if(n==1){
//             return nums[0];
//         }
//         if(n==2 || n==3){
//           return *max_element(nums.begin(), nums.end());
//         }
//         if(n==4){
//             return max(nums[0]+nums[2],nums[1]+nums[3]);
//         }
//         vector<int>dp1,dp2;
//         for(int i=0;i<n;i++){
//             if(i!=n-1){
//                 dp1.push_back(nums[i]);
//             }
//             if(i!=1){
//                  dp2.push_back(nums[i]);
//             }
//         }
//         return max( solveTab(dp1), solveTab(dp2));
         
//     }
// };
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        if(nums.size() == 1)
            return nums[0];
        // there are 2 ways to rob 
        int dp[nums.size()];
        
        // 1. rob the first house => u can't rob the last one
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for(int i=2 ; i<nums.size()-1 ; i++)
            dp[i] = max( nums[i]+ dp[i-2], dp[i-1] );
        int amt1 = dp[nums.size()-2];
        
        // 2. rob the second house till the last one
        dp[0] = 0;
        dp[1] = nums[1];
        for(int i=2 ; i<nums.size() ; i++)
            dp[i] = max( nums[i]+ dp[i-2], dp[i-1] );
        
        return max(amt1, dp[nums.size()-1]);
    }
};