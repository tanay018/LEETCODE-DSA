class Solution {
public:
    int minOperations(int n) {
         int i,j,k=0,s=0;
       i=n/2;
       int max=n;
       
        for(j=0;j<i;j++){
            s+=max-2*j-1;

        }
        return s;
    }
};