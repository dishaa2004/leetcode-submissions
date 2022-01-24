class Solution {
public:
    int n = 8;
    
    bool search(int x, int y, int dx, int dy, char char_to_find, vector<vector<char>>& board) {
        if(x  >= n or y >= n or y < 0 or x < 0) return false;
        // cout << "checking" << x<<" "<<y<<endl;
        if(board[x][y] == '.') return false;
        if(board[x][y] == char_to_find) {
            // cout << "found" << x+dx<<" "<<y+dy<<endl;
            return true;
        }
        return search(x + dx, y + dy, dx, dy, char_to_find, board);
    }
    
    
    bool checkMove(vector<vector<char>>& board, int rMove, int cMove, char color) 
    {
        vector<pair<int,int>> dir ={{1,0},{-1,0},{0,1},{0,-1}, {-1,-1}, {-1,1}, {1,1}, {1,-1}};

        int x = rMove, y = cMove;
        for(auto [dx,dy]: dir) {
            if(x + dx >= n or y + dy >= n or y + dy < 0 or x + dx < 0) // Invalid moves
                continue;
            if(board[x+dx][y+dy] == color) // Same color 
                continue;
            if(search(x + dx, y + dy, dx, dy, color, board)) 
                return true;
        }
        return false;
    }
};