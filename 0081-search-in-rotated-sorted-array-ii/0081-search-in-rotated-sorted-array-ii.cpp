// class Solution {
// public:
//     bool search(vector<int>& nums, int target) {
//          int n = nums.size();
//       int left = 0;
//       int right = n-1;
//       int mid= left + (right - left) / 2;
//       while(left <= right){
//         if(nums[mid] == target)
//          return true;

//          //left sorted
//         if(nums[mid] >= nums[left]) {
//           if(target >= nums[left] && target <= nums[mid])
//             {
//                 right = mid - 1;
//             }
//            else left = mid + 1;
//         } 

//         //right sorted
//         else {
//           if(target >= nums[mid] && target <= nums[right]) 
//             left = mid + 1;
//           else right = mid - 1;
//         }
//           mid = left + (right - left) / 2;
//       }
//       return false;
//     }
// };
class Solution {
public:
    bool search(vector<int>& v, int target) {
        int i=0,j=v.size()-1;
        while(i<=j){
            int m = (i+j)/2;
            if(v[m]==target)return true;
            if(v[i]==v[m] && v[m]==v[j]){
                i++;
                j--;
                continue;
            }
            if(v[m]>=v[i]){
                if(v[i]<= target && target<=v[m])j=m-1;
                else i = m+1;
            }
            else {
                 if(v[j]>= target && target >= v[m])i=m+1;
                else j = m-1;
            }
        }
        return false;
    }
};