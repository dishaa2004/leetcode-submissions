class Solution {
public:
    int color[101];
    bool vis[101];
    
    bool dfs(vector<vector<int>> G,int i,bool c){
        vis[i]=1;
        color[i] = c;
        for(auto &k : G[i]){
            if(!vis[k]){
                if(!dfs(G,k,c^1)) return false;
            }else{
                if(color[k] == color[i]){
                    return false;
                }
            }
        }
        return true;
    }   
    
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                bool k = dfs(graph,i,0);
                if(!k) return false;
            }
        }
        return true;
    }
};