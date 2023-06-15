class Solution {
       private: 
    int solve(vector<int>& prices,int buy,int index,vector<vector<vector<int>>>& dp,int limit){
        int profit=0;
         //base
         if(limit==0){
            return 0;
        }
        if(index==prices.size()){
            return 0;
        }
        if(dp[index] [buy][limit]!=-1){
            return dp[index] [buy][limit];
        }
        if(buy){
            int buykaro =-prices [index] + solve(prices, 0, index+1,dp,limit);
           int skipkaro = 0 + solve( prices, 1,index+1,dp,limit);
           profit = max( buykaro, skipkaro );
           dp[index] [buy][limit]=profit;
        }
        else{
            int sellKaro = prices [index] + solve( prices, 1,index+1,dp,limit-1);
           int skipkaro = 0 + solve(prices, 0,index+1 ,dp,limit);
            profit = max(sellKaro, skipkaro);
             dp[index] [buy][limit]=profit;
        }
        return dp[index] [buy][limit];

    }
public:
    int maxProfit(int k, vector<int>& prices) {
           vector<vector<vector<int>> > dp(prices.size(), vector<vector<int> >(2, vector<int>(k+1,-1)));
        return solve(prices,1,0,dp,k);
    }
};