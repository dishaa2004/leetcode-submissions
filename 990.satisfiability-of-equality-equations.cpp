class Solution {
public:
    vector<int> adj[50];
    bool vis[50];
    bool equal;
    void dfs(int a, int b){
        if(a == b){
            equal = 1;
            return;
        }
        vis[a] = 1;
        for(auto &k : adj[a]){
            if(!vis[k]){
                dfs(k,b);
            }
        }
    }
    bool equationsPossible(vector<string>& eq) {
        for(auto &k : eq){
            char c1 = k[0];
            char c2 = k[3];
            bool f = k[1] == k[2];
            if(f){
                // if(c1 == c2) return 0;
                adj[c1-'a'].push_back(c2-'a');
                adj[c2-'a'].push_back(c1-'a');
            }
        }
        // Checking for equal operation first
        for(auto &k : eq){
            char c1 = k[0];
            char c2 = k[3];
            bool f = k[1] == k[2];
            if(f){
                equal = 0;
                memset(vis,0,sizeof(vis));
                dfs(c1-'a',c2-'a');
                if(!equal) return 0;
            }
        }
        // Checking for != operation
        for(auto &k : eq){
            char c1 = k[0];
            char c2 = k[3];
            bool f = k[1] == k[2];
            if(!f){
                if(c1 == c2) return 0;
                equal = 0;
                memset(vis,0,sizeof(vis));
                dfs(c1-'a',c2-'a');
                if(equal) return 0;
            }
        }
        
        return 1;
    }
};