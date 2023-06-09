class Solution {
public:
    int alternateDigitSum(int n) {
        string s=to_string(n);
        int sum=0;
        for(int i=0;i<s.length();i++){
            if(i%2==0){
                int a=s[i]-'0';
                sum+=a;
            }
            else{
               int a=s[i]-'0';
                sum-=a;
            }
        }
        return sum;
    }
};