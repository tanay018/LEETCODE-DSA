class Solution {
    private:
     void solve(vector<int> nums, int cnt, vector<int> ans,vector<vector<int>>& vec ){
        // base
        if(cnt>=nums.size()){
            vec.push_back(ans);
            return ;
        }
         
         // exclude
         solve(nums,cnt+1,ans,vec);
         
         //inclde
         ans.push_back(nums[cnt]);
          solve(nums,cnt+1,ans,vec);
         
        
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> vec;
        vector<int> ans;
        int cnt=0;
        
        solve(nums,cnt,ans,vec);
        
         return vec;
    }
};