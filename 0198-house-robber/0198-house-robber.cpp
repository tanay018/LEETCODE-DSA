class Solution {
    // private:
    // int solve(int i,int& sum,vector<int>& nums){
        
    //     if(i>=nums.size()-1){
    //         return sum;
    //         sum=0;
    //     }
    //     if(nums.size()==1){
    //         return nums[0];
    //     }
    //     //exclude
    //     for(int i=0;i<nums.size();i++){
    //          solve(i,sum,nums);
            
    //     }

    //     //include
    //     for(int i=0;i<nums.size();i=i+2){
    //         sum+=nums[i];
    //         sum=max(sum,sum+nums[i]);
    //          solve(i,sum,nums);
    //     }
    //     return sum;
        

    // }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        // if (n==1) return nums[0];
        // vector<int> v1(n);
        // v1[0]=nums[0];
        // v1[1]=max(nums[0],nums[1]);
        // for (int i=2;i<nums.size();i++){
        //   v1[i]=max(v1[i-1],v1[i-2]+nums[i]);
        //   }
        //   return v1[n-1];
        // int i=0;int sum=0;
        // return solve(i,sum,nums);
        vector<int> dp(n+1,0);
        dp[0]=0;
        dp[1]=nums[0];
        for(int i=2;i<=n;i++){
            int inc=dp[i-2]+nums[i-1];
            int exc=dp[i-1]+0;
            dp[i]=max(inc,exc);
        }
        return dp[n];
         


    }
};