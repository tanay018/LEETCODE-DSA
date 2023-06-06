class Solution {
    private: 
    bool palindromehaikya(string s){ 
     int i = 0; 
     int j = s.size()-1; 
     while(i<j){ 
     if(s[i] == s[j]){ 
        i++; 
        j--; 
         } 
     else{ 
         return false; 
     } 
     } 
     return true; 
} 
void solve(int cnt,vector<string> temp, vector<vector<string>>& ans,string s){
    if(cnt==s.size()){
            ans.push_back(temp);
            return;
        }
        string t="";
        for(int i=cnt;i<s.size();i++){
            t+=s[i];
            if(palindromehaikya(t)){
                temp.push_back(t);
                solve(i+1,temp,ans,s);
                temp.pop_back();
            }
        }
        return;

    
  
}

public:
    vector<vector<string>> partition(string s) {
        int cnt=0;
        vector<string> output;
        vector<vector<string>> ans;
        solve(cnt,output,ans,s);
        return ans;

    }
};