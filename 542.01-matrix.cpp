const int dx[] = {-1,0,1,0};
const int dy[] = {0,1,0,-1};
/// Up - (row-1,col+0) , Right-(row,col+1) , Down-(row+1,col),Left-(row,col-1)

class Solution {
public:
    bool valid(int i,int j,int r, int c){
        if(i < 0 || j < 0 || i >= r || j >= c){
            return 0;
        }
        return 1;
    }
    // int mn, i1 = 0;
    // int dfs(vector<vector<int>> &mat, int i, int j, int r, int c, int cnt){
    //     if(mat[i][j] == 0){
    //         mn = min(mn,cnt);
    //         return cnt;
    //     }
    //     i1++;
    //     for(int dir=0;dir<4;dir++){
    //         if(ok(i+dx[dir],j+dy[dir],r,c)){
    //             if(mat[i+dx[dir]][j+dy[dir]] == 0){
    //                 return cnt;
    //             }
    //             return dfs(mat,i+dx[dir],j+dy[dir],r,c,i1);
    //         }
    //     }
    //     return 0;
    // }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
    vector<vector<int>> arr( n , vector<int > (m, INT_MAX));
    queue<pair<int,int>> q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j] == 0){
                arr[i][j] = 0;
                q.push({i,j});
            }
        }
    }
    while(!q.empty()){
        int sz = q.size();
            pair top = q.front(); q.pop();
            if(valid(top.first+1, top.second, n,m)){
                if(arr[top.first+1][top.second] > arr[top.first][top.second]+1){
                    arr[top.first+1][top.second] = arr[top.first][top.second]+1;
                    q.push({top.first+1, top.second});
                }
            }
            if(valid(top.first-1, top.second, n,m)){
                if(arr[top.first-1][top.second] > arr[top.first][top.second]+1){
                    arr[top.first-1][top.second] = arr[top.first][top.second]+1;
                    q.push({top.first-1, top.second});
                }
            }
            if(valid(top.first, top.second+1, n,m)){
                if(arr[top.first][top.second+1] > arr[top.first][top.second]+1){
                    arr[top.first][top.second+1] = arr[top.first][top.second]+1;
                    q.push({top.first, top.second+1});
                }
            }
            if(valid(top.first, top.second-1, n,m)){
                if(arr[top.first][top.second-1] > arr[top.first][top.second]+1){
                    arr[top.first][top.second-1] = arr[top.first][top.second]+1;
                    q.push({top.first, top.second-1});
                }
            }
        
    }
   return arr;
    }
};