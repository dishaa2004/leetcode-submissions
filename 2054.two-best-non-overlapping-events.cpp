class Solution {
public:
    
    int maxTwoEvents(vector<vector<int>>& events) {
        sort(events.begin(),events.end());
        int ans = 0,mx = 0;
        priority_queue<array<int,3>,vector<array<int,3>>,greater<array<int,3>>> pq;
        for(auto &k : events){
            while(pq.size()){
                array<int,3> i = pq.top();
                if(k[0] > i[0]){
                    mx = max(mx,i[2]);pq.pop();continue;
                }
                break;
            }
            ans = max(ans, mx + k[2]);
            array<int,3> z = {k[1],k[0],k[2]};
            pq.push(z);
        }
        
        return ans;
    }
};