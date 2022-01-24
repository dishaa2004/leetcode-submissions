const int dx[] = { -1, -1, -1,  0, 0,  1, 1, 1 };
const int dy[] = { -1,  0,  1, -1, 1, -1, 0, 1 };

class Solution {
public:
    bool ok(int i, int j, int r, int c){
        if(i < 0 || j < 0 || i >= r || j >=c ) return 0;
        return 1;
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int first = grid[0][0];
        int last = grid[r-1][c-1];
        if(first != 0 || last != 0) return -1;
        queue<pair<int,int>> Q;
        Q.push({0,0});
        int tot = 0;
        while(Q.size()){
            tot++;
            int sz = Q.size();
            for(int s = 0; s < sz; s++){
                pair<int,int> cur = Q.front(); Q.pop();
                int i = cur.first; int j = cur.second;
                if(i == r-1 && j == c-1) return tot;
                for(int dir = 0; dir < 8; dir++){
                    if(ok(i+dx[dir],j+dy[dir],r,c) && grid[i+dx[dir]][j+dy[dir]] == 0){
                        grid[i+dx[dir]][j+dy[dir]] = 1;
                        Q.push({i+dx[dir],j+dy[dir]});
                    }
                }
            }
        }
        return -1;
    }
};