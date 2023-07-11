class Solution {
public:
    void dfs(int i ,  vector<int> adjl[] , vector<int>& v )
    {
        v[i]=1;
        for(auto it : adjl[i])
        {
            if(!v[it])
            {
                dfs(it,adjl,v);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {

  
        int v = isConnected.size();
              vector<int> adjl[v];
        for(int i=0 ; i<v ; i++)
        {
            for(int j =0 ; j<v ; j++)
            {
                if(isConnected[i][j]==1 && i!=j)
                {
                    adjl[i].push_back(j);
                   
                }
            }
        }
        vector<int> vis(v,0);
        int c=0;
        for(int i=0 ; i<v ; i++)
        {
            if(!vis[i])
            {
                c++;
                dfs(i,adjl,vis);
            }
        }
        return c;
    }
};