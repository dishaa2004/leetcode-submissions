class Solution {
public:
    int dfs( int r, int c, vector<vector<int>>& grid, int sum){
        if(r<0||grid.size()-1<r||c<0||grid[0].size()-1<c||grid[r][c]==-1||grid[r][c]==1)  return 0;
        if(grid[r][c]==2)   return sum==1?1:0;
        grid[r][c]=1; 
        int a1 = dfs(r-1,c,grid,sum-1);
        int b1 = dfs(r+1,c,grid,sum-1);
        int c1 = dfs(r,c-1,grid,sum-1);
        int d1 = dfs(r,c+1,grid,sum-1);
        grid[r][c]=0;
        return a1+b1+c1+d1;
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) 
    {
        int n = grid.size(); // Rows
        if(n == 0) return 0;
        int m = grid[0].size(); // Columns
        int pathcnt = n*m;

        int si,sj;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1){
                    grid[i][j] = 0;
                    si = i;
                    sj = j;
                }else if(grid[i][j] == -1){
                    pathcnt--;
                }
            }
        }
        
        return dfs(si,sj,grid,pathcnt);
    }
};