class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end());
       int sum=0;
       int cnt=0;
       for(int i=0;i<k;i++){
          sum+=nums[nums.size()-1];
         
          sum+=cnt;
           cnt++;
       } 
       return sum;
    }
};