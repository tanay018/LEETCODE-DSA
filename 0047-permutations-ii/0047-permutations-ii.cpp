class Solution {
public:

  void f(vector<int>nums,vector<int>&temp,set<vector<int>>&ans,int freq[]){
        if(temp.size()==nums.size()){
            ans.insert(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                freq[i]=1;
                temp.push_back(nums[i]);
                f(nums,temp,ans,freq);
                freq[i]=0;
                temp.pop_back();
            }
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
         set<vector<int>>ans;
        vector<int>temp;
        int n=nums.size();
        int freq[n];
        for(int i=0;i<nums.size();i++){
            freq[i]=0;
        }
        f(nums,temp,ans,freq);
        vector<vector<int>>res;

        for(auto it : ans){
            vector<int> temp = it;
            res.push_back(temp);
        }
        return res;
    }
};

