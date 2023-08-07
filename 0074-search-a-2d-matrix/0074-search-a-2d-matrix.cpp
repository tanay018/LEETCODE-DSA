class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int k) {
        int l=0;
        int m=matrix[0].size();
        int n=matrix.size();
        int h=(n*m)-1;
        if (matrix.size()==0) return false;
        while(l<=h){
            int mid=(l+h)/2;
             if(matrix[mid/m][mid%m]==k)  return true; 
             if (matrix[mid/m][mid%m]<k) 
             l=mid+1;
             else 
             h=mid-1;

        }
        return false;
    }
};