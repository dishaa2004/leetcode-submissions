//Directions -  Down,Left,Up,Right
const int dx[] = { 1, 0, -1, 0 };
const int dy[] = { 0, -1, 0, 1 };
class Solution {
public:
    bool vis[201][201];
    int A[201][201];
    int r,c;
    bool ok(int i, int j){
        if(i < 0 || j < 0 || i >= r || j >= c) return 0;
        if(vis[i][j]) return 0;
        return 1;
    }
    void dfs(int i,int j){
        cout << i << "," << j << endl;
        vis[i][j] = 1;
        for(int dir = 0; dir < 4; dir++){
            if(ok(i+dx[dir],j+dy[dir]) && A[i+dx[dir]][j+dy[dir]] == 1){
                dfs(i+dx[dir],j+dy[dir]);
            }
        }
        return;
    }
    int countBattleships(vector<vector<char>>& board) {
        r = board.size();
        c = board[0].size();
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j] == 'X')
                    A[i][j] = 1;
                else
                    A[i][j] = 0;
            }
        }
        int ans = 0;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(A[i][j] == 1 && vis[i][j] == 0){
                    // cout << i << "," << j << endl;
                    ans++;
                    dfs(i,j);
                }
            }
        }
        return ans;
    }
};