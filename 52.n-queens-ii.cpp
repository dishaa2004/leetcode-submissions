class Solution {
public:
    vector<vector<string>> ans;
    
    bool canPlace(vector<vector<int>> &board, int i, int j) {
        // Column
        for (int k = 0; k < i; k++) {
            if (board[k][j]) return 0;
        }

        // Left Diagonal
        int p = i, q = j;
        while (p >= 0 && q >= 0) {
            if (board[p][q]) return 0;
            p--;
            q--;
        }

        // Right Diagonal
        p = i, q = j;
        while (p >= 0 && q <= board.size() - 1) {
            if (board[p][q]) return 0;
            p--;
            q++;
        }
        // we can place
        return 1;
    }
    
    bool NQ(int n, vector<vector<int>> &Q, int i){
        if(i == n){
            vector<string> config;
            for(int i=0;i<n;i++){
                string cur;
                for(int j=0;j<n;j++){
                    if(Q[i][j]) cur.push_back('Q');
                    else cur.push_back('.');
                }
                config.push_back(cur);
            }
            ans.push_back(config);
            return 1;
        }
        
        for(int j=0;j<n;j++){
            if(canPlace(Q,i,j)){
                Q[i][j] = 1;
                bool ok = NQ(n,Q,i+1);
                Q[i][j] = 0; // Backtracking to find all possible config.
            }
        }
        return 0;
    }
    int totalNQueens(int n) {
        vector<vector<int>> board(n,vector<int>(n,0));
        ans.clear();
        int i = 0;
        bool pos = NQ(n,board,i); // i -> row
        return ans.size();
    }
};