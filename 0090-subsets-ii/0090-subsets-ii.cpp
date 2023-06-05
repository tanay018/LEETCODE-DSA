class Solution {
    private:
    void solve(int index,vector<int> output,set<vector<int>>& ans,vector<int>& nums){
        //base 
        if(index==nums.size()) {
            sort(output.begin(),output.end());
            ans.insert(output);
            return;
        }

        solve(index+1,output,ans,nums);

        output.push_back(nums[index]);
        solve(index+1,output,ans,nums);

    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int index=0;
        vector<int> output;
        set<vector<int>> ans;
        solve(index,output,ans,nums);
         vector<vector<int>> vc;
 
    // Using vector::assign
    vc.assign(ans.begin(), ans.end());
        return vc;
    }
};