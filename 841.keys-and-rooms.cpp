class Solution {
public:
    bool vis[1005];
    
    void dfs(int i, vector<vector<int>>&adj){
        vis[i] = 1;
        for(auto &k : adj[i]){
            if(!vis[k]){
                dfs(k,adj);
            }
        }
        return;
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        memset(vis,0,sizeof(0));
        dfs(0,rooms);
        for(int i=0;i<rooms.size();i++){
            if(!vis[i]){
                return 0;
            }
        }
        return 1;
    }
};