// class Solution {
// public:
//     int longestCommonPrefix(vector<string>& strs) {
//         string s="";
//         for(int i=0;i<strs.size();i++){
//             s.push(strs[i]);
//             s.push(" ");
//         }
//         int 
//         stringstream s2(s);
//         while(s2>>s){
          
//         }
//     }
// };
class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string ans="";
        sort(v.begin(),v.end());
        int n=v.size();
        string first=v[0],last=v[n-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
};