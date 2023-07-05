class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> maxi;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            
            if(!maxi.empty() && maxi.front()==i-k)//out of bound , i-k silding window
                maxi.pop_front();
            
             while(!maxi.empty()&&nums[maxi.back()]<=nums[i])  // remove smaller than nums[i]
                maxi.pop_back();
            
            maxi.push_back(i);  // index of max 
            if(i>=k-1)
                ans.push_back(nums[maxi.front()]);
        }
        return ans;
    }
};