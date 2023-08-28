// class Solution {
// public:
//     string reverseOnlyLetters(string s) {
//         stack<char>st;
//         for(int i=0;i<s.length();i++){
//             if(s[i]-0>=65 && (s[i]-0<=122)) {
//                 st.push(s[i]);
//             }
            
//         }
//         // string ss="";
//         // for(int i=0;i<s.length();i++){
//         //     if(s[i]!='-') {
//         //         ss=ss+st.top();
//         //     st.pop();}

//         //     else{

//         //        ss+=s[i];
//         //     }
//         // }
//         // return ss;

//           string ans;
//         for (char c: s) {
//             if (isalpha(c)){
//                 ans+=(st.top());
//                 st.pop();
//             }else
//                 ans+=c;
//         }
//         return ans;

//     }
// };
class Solution {
public:
    string reverseOnlyLetters(string s) {
        stack<char>letters;
        for (char c: s)
            if (isalpha(c))  letters.push(c);

        string ans;
        for (char c: s) {
            if (isalpha(c)){
                ans+=(letters.top());
                letters.pop();
            }else
                ans+=c;
        }
        return ans;
    }
};