const int dx[] = {-1,0,1,0};
const int dy[] = {0,1,0,-1};

class Solution {
public:
    void dfs(vector<vector<char>> &board ,int i, int j, int r, int c){
        if(i < 0 || j < 0 || i >= r || j >= c) return;
        if(board[i][j] == 'X' || board[i][j] == '#') return;
        
        board[i][j] = '#';
        
        for(int dir = 0; dir < 4; dir++){
            dfs(board,i+dx[dir],j+dy[dir],r,c);
        }
        return;
    }
    
    void solve(vector<vector<char>>& board) {
        int r = board.size();
        int c = board[0].size();
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i == 0 || j == 0 || i == r-1 || j == c-1){
                    dfs(board,i,j,r,c);
                }
            }
        }
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j] == 'O') board[i][j] = 'X'; 
            }
        }
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j] == '#') board[i][j] = 'O'; 
            }
        }
        
    }
};