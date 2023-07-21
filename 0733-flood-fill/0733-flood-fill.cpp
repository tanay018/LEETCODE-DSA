class Solution {
public:
    void dfs(int row,int col,int initialcolor,int newcolor,int deltarow[],int deltacol[],
                vector<vector<int>>& ans,vector<vector<int>>& image){
        int n=image.size();
        int m=image[0].size();
        ans[row][col]=newcolor;
        //check for the 4 neighbours
        for(int i=0;i<4;i++){
            int nrow=row+deltarow[i];
            int ncol=col+deltacol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && 
                image[nrow][ncol]==initialcolor && ans[nrow][ncol]!=newcolor){
                    dfs(nrow,ncol,initialcolor,newcolor,deltarow,deltacol,ans,image);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image,int sr,int sc,int color){
        int initialcolor=image[sr][sc];
        vector<vector<int>>& ans=image;
        int deltarow[]={-1,0,1,0};
        int deltacol[]={0,1,0,-1};
        dfs(sr,sc,initialcolor,color,deltarow,deltacol,ans,image);
        return ans;
    }
};