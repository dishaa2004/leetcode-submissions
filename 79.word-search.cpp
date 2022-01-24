const int dx[] = {-1,0,1,0};
const int dy[] = {0,1,0,-1};
/// Up - (row-1,col+0) , Right-(row,col+1) , Down-(row+1,col),Left-(row,col-1)

class Solution {
public:
    char grid[20][20];
    bool vis[20][20];
    bool ok(int i,int j,int m,int n){
        if(i<0 || j<0 || i >= m || j >= n) // Out of bound conditions
            return false;
        if(vis[i][j]) return false;
        return true;
    }
    
    bool dfs(string word,int index, int i, int j, int r, int c){
        if(index >= word.size()){
            return true;
        }
        vis[i][j] = 1;
        
        for(int dir=0;dir<4;dir++){
            if(ok(i+dx[dir],j+dy[dir],r,c)){
                if(grid[i+dx[dir]][j+dy[dir]] == word[index]){
                    if(dfs(word,index+1,i+dx[dir],j+dy[dir],r,c)){
                        return true;
                    }
                }
            }
        }
        vis[i][j] = 0;
        return false;
    }
    
    
    bool exist(vector<vector<char>>& board, string word) {
        memset(vis,0,sizeof(vis));
        int r = board.size();
        int c = board[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                grid[i][j] = board[i][j];
            }
        }
        
        bool ans = false;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j] == word[0]){
                    memset(vis,0,sizeof(vis));
                    bool cur_ans = dfs(word,1,i,j,r,c);
                    ans |= cur_ans;
                }
            }
        }
        return ans;
    }
};