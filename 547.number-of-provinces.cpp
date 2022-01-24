class Solution {
public:
    vector<int> adj[201];
    bool vis[201];
    
    void dfs(int x){
        vis[x] = 1;
        for(auto &k : adj[x]){
            if(!vis[k]) dfs(k);
        }
        return;
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        for(int i = 0;i<isConnected.size();i++){
            for(int j=0;j<isConnected[i].size();j++){
                if(isConnected[i][j] && i != j){
                    adj[i+1].push_back(j+1);
                }
            }
        }
        int ans = 0;
        for(int i=1;i<=isConnected.size();i++){
            if(!vis[i]){
                dfs(i);
                ans++;
            }
        }
        return ans;
    }
};