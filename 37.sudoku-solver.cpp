class Solution {
public:
    bool ok(int n, vector<vector<int>> &grid, int i,int j, int r, int c){
        for(int rc=0;rc<r;rc++){
            // if(rc == i || rc == j) continue; 
            if(grid[i][rc] == n || grid[rc][j] == n) return 0;
        }
        int x = (i/3)*3;
        int y = (j/3)*3;
        
        for(int cx = x; cx < x+3; cx++){
            for(int cy = y; cy < y+3; cy++){
                if(grid[cx][cy] == n){
                    return 0;
                }
            }
        }
        return 1;
    }
    
    bool solve(vector<vector<int>> &grid, int i, int j, int r, int c){
        if(i == r){
            return 1;
        }
        if(j == c){
            return solve(grid,i+1,0,r,c);
        }
        if(grid[i][j] != 0){
            return solve(grid,i,j+1,r,c);
        }
        
        for(int n=1;n<=9;n++){
            if(ok(n,grid,i,j,r,c)){
                grid[i][j] = n;
                bool cur = solve(grid,i,j+1,r,c);
                if(cur){
                    return 1;
                }
                
            }
        }
        grid[i][j] = 0;
        return 0;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        int r = board.size();
        int c = board[0].size();
        vector<vector<int>> grid(r,vector<int>(c,0));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j] != '.'){
                    grid[i][j] = board[i][j] - '0';
                }
            }
        }
        bool p = solve(grid,0,0,r,c);
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                board[i][j] = grid[i][j] + '0';
            }
        }
    }
};