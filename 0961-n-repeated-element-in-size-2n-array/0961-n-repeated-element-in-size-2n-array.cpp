class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort (nums.begin(),nums.end());
        int n=nums.size()/2;
        if(nums[n]==nums[n+1] || nums[n]==nums[n-1]) return nums[n];
        else if(nums[n-1]==nums[n] || nums[n-1]==nums[n-2]) return nums[n-1];
        return nums[n];
    }
};