const int dx[] = {-1,0,1,0};
const int dy[] = {0,1,0,-1};
/// Up - (row-1,col+0) , Right-(row,col+1) , Down-(row+1,col),Left-(row,col-1)

class Solution {
public:
    int n;
    vector<vector<int>>g;
    bool vis[501][501]; 
    int fill(int i,int j,int id){
        if(i<0 || j<0 || i>=n || j>=n || g[i][j]!=1)
            return 0;
        g[i][j]=id;
        int res=1;
        for(int k=0;k<4;k++)
            res+=fill(i+dx[k],j+dy[k],id);
        return res;
    }
    
    int largestIsland(vector<vector<int>>& grid) {
        int index=2;
        g=grid;
        n=g.size();
        vector<int> AA(n*n+1+1);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(g[i][j]==1)
                {
                    AA[index]=fill(i,j,index);
                    index++;
                }
            }
        }
        int res=0;
        for(auto x:AA)
            res=max(res,x);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(g[i][j]==0)
                {
                    set<int>nearby;
                    for(int k=0;k<4;k++)
                    {
                        int x=i+dx[k],y=j+dy[k];
                        if(x>=0 && y>=0 && x<n && y<n && g[x][y]>1)
                        {
                            nearby.insert(g[x][y]);
                        }    
                    }
                    int curr=1; 
                    for(auto nb:nearby)
                        curr+=AA[nb];
                    res=max(res,curr);
                }
            }
        }
        return res;
    }
};