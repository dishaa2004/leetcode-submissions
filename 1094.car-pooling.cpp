class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> dist(1005,0);
        for(auto &k : trips){
            dist[k[1]] += k[0];
            dist[k[2]] -= k[0];
        }
        int cur = 0;
        for(int i=0;i<1005;i++){
            cur += dist[i];
            if(cur > capacity) return 0;
        }
    
        return 1;
    }
};