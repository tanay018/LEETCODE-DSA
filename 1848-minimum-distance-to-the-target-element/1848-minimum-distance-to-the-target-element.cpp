class Solution {
public:
	int getMinDistance(vector<int>& nums, int t, int s) {
		int ans=INT_MAX;
		for(int i=0;i<nums.size();i++){
			if(nums[i]==t) ans=min(ans,abs(i-s));
		}
		return ans;
	}
};