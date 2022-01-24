class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int minutes = 0, rottenOranges = 0, freshOranges = 0;
        queue<pair<int, int>> q;
        vector<vector<int>> dv{{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
        for(int x = 0; x < grid.size(); x++){
            for(int y = 0; y < grid[x].size(); y++){
                if(grid[x][y] == 2){
                    q.push({x, y});         
                } else if(grid[x][y] == 1){
                    freshOranges++;  
                }
            }
        }
        rottenOranges = q.size();
        while(!q.empty() and freshOranges > 0){
            while(rottenOranges != 0) {
                auto rotten = q.front();
                q.pop();
                rottenOranges -= 1;
                for(auto &d : dv){
                    int nr = rotten.first + d[0], nc = rotten.second + d[1];
                    if(nr >= 0 && nr < grid.size() && nc >= 0 && nc < grid[nr].size() && grid[nr][nc] == 1){
                        grid[nr][nc] = 2; 
                        q.push({nr, nc});
                        freshOranges -= 1;
                    }
                }
            }
            rottenOranges = q.size();
            minutes++;
        }

        return freshOranges > 0 ? -1 : minutes;
    }
};