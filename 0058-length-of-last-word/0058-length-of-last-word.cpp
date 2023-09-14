class Solution {
public:
    int lengthOfLastWord(string s) {
       reverse(s.begin(), s.end());
        stringstream ss(s);
        string strings = "";
        ss >> strings;
        return strings.size();
    }
};