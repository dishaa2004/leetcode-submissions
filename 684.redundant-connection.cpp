class Solution {
public:
    int n, par[1005], sz[1005], num_grp;

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
    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        n = edges.size();
        num_grp = n;
        for (int i = 1; i <= n; i++) par[i] = i, sz[i] = 1;
        
        for(auto &k : edges){
            if(find(k[0]) == find(k[1])) return {k[0],k[1]};
            merge(k[0],k[1]);
        }
        
        return {};
    }
};