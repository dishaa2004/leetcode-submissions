class Solution {
public:
    vector<vector<int>> dp;
    int help(vector<vector<int>> &grid,int i,int j){
        if(grid.size() == i+1 && grid[0].size() == j+1){
            return grid[i][j] > 0 ? 1 : 1+abs(grid[i][j]);
        }
        if(i==grid.size() || j==grid[0].size()) return INT_MAX;
        if(dp[i+1][j] == -1)
            dp[i+1][j] = help(grid,i+1,j);
        if(dp[i][j+1] == -1)
            dp[i][j+1] = help(grid,i,j+1);       
        return max(1,min(dp[i][j+1],dp[i+1][j])-grid[i][j]);
    }
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        dp.resize(dungeon.size()+1,vector<int>(dungeon[0].size()+1,-1));
        return help(dungeon,0,0);
        
    }
};