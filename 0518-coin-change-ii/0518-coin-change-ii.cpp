// class Solution {
//     private:
//     int memsolve(vector<int>& coins,int amount, vector<int>& dp){
  
//           if(amount==0) return 0;
//           if(amount<0) return INT_MAX;
//           if(dp[amount]!=-1){
//                   return dp[amount];
//           }

//           int ans=0;
//           for(int i=0;i<coins.size();i++){
//              ans=memsolve(coins,amount-coins[i],dp);
  
// //   if(ans!=INT_MAX){
// //    int mini=min(mini,ans+1);
//            }

// }                
// dp[amount]=ans;
// return ans;


// }
// public:
//     int change(int amount, vector<int>& coins) {
//         vector<int> dp(amount+1,-1);
//          int ans= memsolve(coins,amount,dp);
//       if(ans==INT_MAX){
//             return -1;
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int solve(vector<int> &coins, int amount, int i, vector<vector<int>> &dp){
        if(i==0){
            if(amount%coins[i]==0){
                return 1;
            }else{
                return 0;
            }
        }

        if(dp[i][amount] != -1){
            return dp[i][amount];
        }

        int noPick = solve(coins, amount, i-1, dp);
        int Pick = 0;
        if(amount >= coins[i]){
            Pick = solve(coins, amount-coins[i], i, dp);
        }

        return dp[i][amount] = Pick+noPick;
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size(), vector<int> (amount+1, -1));
        return solve(coins, amount, coins.size()-1, dp);
    }
};