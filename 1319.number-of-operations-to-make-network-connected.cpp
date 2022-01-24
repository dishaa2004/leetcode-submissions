class Solution {
public:
    int par[100005], sz[100005], num_grp;
 
    int find(int u) {
        return u == par[u] ? u : par[u] = find(par[u]);
    }

    void merge(int u, int v) {
        u = find(u), v = find(v);
        if (u == v) return;
        if (sz[u] > sz[v]) swap(u, v);
        par[u] = v;
        sz[v] += sz[u];
        num_grp--;
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size() < n-1){
            return -1;
        }
        num_grp = n;
        for(int i=0;i<n;i++){
            par[i] = i;
            sz[i] = 1;
        }
        
        for(auto &k : connections){
            merge(k[0],k[1]);
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            if(par[i] == i) ans++;
        }
        return ans-1;
    }
};