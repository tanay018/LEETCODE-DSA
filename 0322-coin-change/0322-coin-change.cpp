class Solution {
//   private:
// int recsolve(vector<int>& coins,int amount){
  
// if(amount==0) return 0;
// if(amount<0) return INT_MAX;
// int mini=INT_MAX;
// for(int i=0;i<coins.size();i++){
//   int ans=recsolve(coins,amount-coins[i]);
  
//   if(ans!=INT_MAX){
//    int mini=min(mini,ans+1);
//   }

// }
// return mini;


// }
// int memsolve(vector<int>& coins,int amount, vector<int>& dp){
  
// if(amount==0) return 0;
// if(amount<0) return INT_MAX;
// if(dp[amount]!=-1){
//   return dp[amount];
// }
// int mini=INT_MAX;
// for(int i=0;i<coins.size();i++){
//   int ans=memsolve(coins,amount-coins[i],dp);
  
//   if(ans!=INT_MAX){
//    int mini=min(mini,ans+1);
//   }

// }
// dp[amount]=mini;
// return mini;


// }
public:
int solveTab (vector<int> &num, int x) {

vector<int> dp (x+1, INT_MAX);
dp [0] = 0;
for(int i=1; i<=x; i++) {

for(int j = 0; j<num.size(); j++) {
if(i-num [j] >= 0 && dp [i-num [j]] != INT_MAX) {
dp [i] = min (dp[i], 1 + dp[i-num[j]]);
}
}
}
if (dp [x] == INT_MAX)
return -1;
return dp [x];}

    int coinChange(vector<int>& coins, int amount ) {
        // vector<int> dp(amount+1.-1);
        // int n=coins.size();
        // int ans= recsolve(coins,amount);
        // if(ans==INT_MAX){
        //     return -1;
        // }
        // return ans;
      //   int ans= memsolve(coins,amount,dp);
      // if(ans==INT_MAX){
      //       return -1;
      //   }
      //   return ans;
          return solveTab(coins,amount);
        }
};



  