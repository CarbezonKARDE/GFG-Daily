class Solution
{
    public:
    #define p pair<int,pair<int,int>>
    int minimumCostPath(vector<vector<int>>& grid)
    {
        int n=grid.size(),m=grid[0].size();
        priority_queue<p,vector<p>,greater<p>>pq;
        vector<vector<int>>dij(n,vector<int>(m,1e9));
        dij[0][0]=0;
        pq.push({grid[0][0],{0,0}});
        int drow[]={1,-1,0,0};
        int dcol[]={0,0,1,-1};
        while(!pq.empty())
        {
          auto it=pq.top();
          int dist=it.first;
          int row=it.second.first;
          int col=it.second.second;
          pq.pop();
          if(row==n-1 && col==m-1)return dij[n-1][m-1];
            for(int i=0;i<4;i++){
                int nrow=row+drow[i];
                int ncol=col+dcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m )
                {
                    if(dist+grid[nrow][ncol]<dij[nrow][ncol])
                    {
                        dij[nrow][ncol]=dist+grid[nrow][ncol];
                        pq.push({dij[nrow][ncol],{nrow,ncol}});
                    }
                }
            }
        }
        return -1;
    }
};