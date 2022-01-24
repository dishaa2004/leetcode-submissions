class Solution {
public:
    int board[8][8];
    bool attacking(int kx, int ky, int i, int j){
        for(int row = i-1; row >= 0; row--){
            if(board[row][j] == 1) break;
            if(row == kx && j == ky) return 1;
        }
        
        for(int row = i+1; row < 8; row++){
            if(board[row][j] == 1) break;
            if(row == kx && j == ky) return 1;
        }
        
        for(int col = j-1; col >= 0; col--){
            if(board[i][col] == 1) break;
            if(i == kx && col == ky) return 1;
        }
        
        for(int col = j+1; col < 8; col++){
            if(board[i][col] == 1) break;
            if(i == kx && col == ky) return 1;
        }
        
        int rdx = i+1, rdy = j+1; // Right Down
        while(rdx < 8 && rdy < 8){
            if(board[rdx][rdy] == 1) break;
            if(kx == rdx && ky == rdy) return 1;
            rdx++;
            rdy++;
        }
        rdx = i-1, rdy = j-1; // Left Up
        while(rdx >= 0 && rdy >= 0){
            if(board[rdx][rdy] == 1) break;
            if(kx == rdx && ky == rdy) return 1;
            rdx--;
            rdy--;
        }
        
        rdx = i-1, rdy = j+1; // Right Up
        while(rdx >= 0 && rdy < 8){
            if(board[rdx][rdy] == 1) break;
            if(kx == rdx && ky == rdy) return 1;
            rdx--;
            rdy++;
        }
        rdx = i+1, rdy = j-1; // Left Down
        while(rdx < 8 && rdy >= 0){
            if(board[rdx][rdy] == 1) break;
            if(kx == rdx && ky == rdy) return 1;
            rdx++;
            rdy--;
        }
        return 0;
    }
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        for(auto &q : queens){
            board[q[0]][q[1]] = 1;
        }
        vector<vector<int>> ans;
        int kx = king[0], ky = king[1];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(board[i][j] && attacking(kx,ky,i,j)){
                    ans.push_back({i,j});
                }
            }
        }
        return ans;
    }
};