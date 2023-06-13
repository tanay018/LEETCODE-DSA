class Solution {
    private: 
    int solve(vector<int>& prices,int buy,int index,vector<vector<int> >& dp){
        int profit=0;
        //base
        if(index==prices.size()){
            return 0;
        }
        if(dp[index] [buy]!=-1){
            return dp[index] [buy];
        }
        if(buy){
            int buykaro =-prices [index] + solve(prices, 0, index+1,dp);
           int skipkaro = 0 + solve( prices, 1,index+1,dp);
           profit = max( buykaro, skipkaro );
           dp[index] [buy]=profit;
        }
        else{
            int sellKaro = prices [index] + solve( prices, 1,index+1,dp);
           int skipkaro = 0 + solve(prices, 0,index+1 ,dp);
            profit = max(sellKaro, skipkaro);
             dp[index] [buy]=profit;
        }
        return dp[index] [buy];

    }
public:
    int maxProfit(vector<int>& prices) {
        vector<vector<int> > dp(prices.size(), vector<int>(2, -1));
        return solve(prices,1,0,dp);
    }
};