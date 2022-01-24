#define pi pair<int,int>
class Solution {
public:
    
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<int>> adj[n+1];
        for(auto &k : times){
            adj[k[0]].push_back({k[1],k[2]});
            // adj[k[1]].push_back({k[0],k[2]});
        }
        
        vector<int> dist(n+1,INT_MAX);
        dist[k] = 0;
        priority_queue<pi,vector<pi>,greater<pi>> pq;
        pq.push({dist[k],k});
        
        while(pq.size()){
            pi cur = pq.top(); pq.pop();
            int distp = cur.first;
            int vianode = cur.second;
            for(auto &k : adj[vianode]){
                if(dist[k[0]] > (k[1] + distp)){
                    dist[k[0]] = (k[1] + distp);
                    pq.push({dist[k[0]],k[0]});
                }
            }
        }
        int ans = -1e9;
        
        
        for(int i=1;i<=n;i++){
            if(dist[i] == INT_MAX){
                return -1;
            }
            if(i != k){
                ans = max(ans,dist[i]);
            }
        }
        
        return (ans == -1e9) ? -1 : ans;
    }
};