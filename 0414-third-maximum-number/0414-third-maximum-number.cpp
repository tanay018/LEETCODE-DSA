// class Solution {
// public:
//     int thirdMax(vector<int>& nums) {
//         int n=nums.size();
//         sort(nums.begin(),nums.end());
//        set<int>st;
//         for(int i=0;i<n;i++){
//             st.insert(nums[i]);
//         }
//          int nn=nums.size();
//         if(nn<=2){
//           return nums[n-1];
//        }
        
//          auto it = st.begin();
//         for(int i=0;i<n-2;i++)
//     {
//         it++;
//     }
//        return *it;
//     }
// };
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // Sort the array in non-increasing order.
        sort(nums.begin(), nums.end(), greater<int>());
        
        int elemCounted = 1;
        int prevElem = nums[0];
        
        for (int index = 1; index < nums.size(); ++index) {
            // Current element is different from previous.
            if (nums[index] != prevElem) {
                elemCounted += 1;
                prevElem = nums[index];
            }
            
            // If we have counted 3 numbers then return current number.
            if (elemCounted == 3) {
                return nums[index];
            }
        }
        
        // We never counted 3 distinct numbers, return largest number.
        return nums[0];
    }
};