class Solution {
public:
    int cost(int p, int q, int x, int y){
        return abs(p-x) + abs(q-y);
    }
    int n, m, par[1001];
    vector<array<int,3>> edges;
    
    int find(int u) {
        return u == par[u] ? u : par[u] = find(par[u]);
    }

    void unite(int u, int v) {
        par[find(u)] = find(v);
    }

    int kruskal() {
        sort(edges.begin(), edges.end());
        for (int i = 0; i <= n; i++) par[i] = i;

        int cnt = 0, cost = 0;
        for (auto [w, u, v] : edges) {
            u = find(u), v = find(v);
            if (u != v) {
                par[u] = v;
                cost += w;
                cnt++;
            }
        }
        return cost;
    }
    
    int minCostConnectPoints(vector<vector<int>>& points) {
        n = points.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j){
                    m++;
                    int w = cost(points[i][0],points[i][1],points[j][0],points[j][1]);
                    edges.push_back({w,i,j});
                    // adj[i].push_back({j,w});
                    // adj[j].push_back({i,w});
                }
            }
        }   
        return kruskal();
    }
};