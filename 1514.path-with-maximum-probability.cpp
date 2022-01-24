#define pi pair<int,double>
#define pp pair<double,int>
class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<pi> adj[n+1];
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back({edges[i][1],succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0],succProb[i]});
        }
        vector<double> dist(n+1,0.0);
        dist[start] = 1.0;
        // vector<bool> vis(n+1,0);
        // Construct Max Heap 
        priority_queue<pp> pq;
        pq.push({dist[start],start});
        
        while(pq.size()){
            pp cur = pq.top(); pq.pop();
            
            // cout << cur.first << " : " << cur.second << endl;
            
            if(cur.second == end){
                return 1.0*cur.first;
            }
            
            for(auto &k : adj[cur.second]){
                if(dist[k.first] < (k.second*cur.first) ){
                    dist[k.first] = (k.second*cur.first);
                    pq.push({dist[k.first],k.first});
                }
            }
        }
        return dist[end];
    }
};