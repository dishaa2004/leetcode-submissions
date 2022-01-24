const int dx[] = {-1,0,1,0};
const int dy[] = {0,1,0,-1};
/// Up - (row-1,col+0) , Right-(row,col+1) , Down-(row+1,col),Left-(row,col-1)

class Solution {
public:
    int a[151][151];
    bool ok(int i,int j,int m,int n){
        if(i<0 || j<0 || i > m-1 || j > n-1) // Out of bound conditions
            return false;
        
        if(a[i][j] == 1) return 1;
        return 0;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans = 0;
        int r = grid.size(),c = grid[0].size();
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                a[i][j] = grid[i][j];
            }
        }
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j] == 1){
                    int cnt = 0;
                    for(int dir=0;dir<4;dir++){   // Checking to all the four directions
                        if(ok(i+dx[dir],j+dy[dir],r,c)) // If it is a valid land
                            cnt++;
                    }    
                    ans += (4-cnt);
                }
            }
        }
        return ans;
    }
};