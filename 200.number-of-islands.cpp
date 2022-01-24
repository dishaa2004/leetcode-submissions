const int dx[] = {-1,0,1,0};
const int dy[] = {0,1,0,-1};
/// Up - (row-1,col+0) , Right-(row,col+1) , Down-(row+1,col),Left-(row,col-1)
class Solution {
public:
    char a[301][301];
    bool vis[301][301]; 
    
    bool ok(int i,int j,int m,int n){
        if(i<0 || j<0 || i > m-1 || j > n-1) // Out of bound conditions
            return false;
        if(a[i][j] == '0') // Water Node is invalid
            return false;
        if(vis[i][j] == true) // Visited node is also invalid
            return false;
        return true;    // Rest is valid
    }
    
    void fill(int i,int j,int m,int n){
        vis[i][j] = true; // Marking node as visited
        
        for(int dir=0;dir<4;dir++){   // Checking to all the four directions
            if(ok(i+dx[dir],j+dy[dir],m,n)) // If it is a valid land
                fill(i+dx[dir],j+dy[dir],m,n);  // Again sink to find complete land
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                a[i][j] = grid[i][j];
            }
        }
        int ans = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(ok(i,j,m,n)){
                    ans++;
                    fill(i,j,m,n);
                }
            }
        }
        return ans;
    }
};