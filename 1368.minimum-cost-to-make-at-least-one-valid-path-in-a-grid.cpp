#define pi array<int,3>
class Solution {
public:
    // Indexing : 1-right, 2-left, 3-down, 4-up
    vector<pair<int,int>> dir = {
        {},{0,1},{0,-1},{1,0},{-1,0}
    };
    // Distance and Visited matrix
    int dist[101][101];
    bool vis[101][101];
    // Check valid index in grid
    bool isValid(int i, int j, int r, int c){
        if(i < 0 || j < 0 || i >= r || j >= c){
            return 0;
        }
        return vis[i][j] == 0;
    }
    
    int minCost(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(); 
        int sx = 0, sy = 0; // Source 
        int dx = n-1, dy = m-1; // Destination
        
        memset(dist,1e9,sizeof(dist));
        memset(vis,0,sizeof(vis));
        
        // 0-1 BFS 
        deque<pi> Q;
        Q.push_back({sx,sy,0});
        
        while(Q.size()){
            pi cur = Q.front(); Q.pop_front();
            int curx = cur[0]; 
            int cury = cur[1];
            int curd = cur[2];
            int direction = grid[curx][cury];
            
            // Mark as visited for current node
            vis[curx][cury] = 1;
            
            // Return dist if we reach destination
            if(curx == dx && cury == dy) return curd; 
            
            for(int i=1;i<=4;i++){
                int newx = curx + dir[i].first;
                int newy = cury + dir[i].second;
                if(!isValid(newx,newy,n,m)) continue;
                if(direction == i){
                    Q.push_front({newx,newy,curd}); 
                    // No cost as we are going in the same direction as                     given in grid & processing first
                }else{
                    Q.push_back({newx,newy,curd+1}); 
                    // Adding modify cost
                }
            }
        }
        return 1e9;
    }
};