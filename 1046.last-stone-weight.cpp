class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto &k : stones) pq.push(k);
        int ans = 0;
        while(pq.size()){
            int cur = pq.top(); pq.pop();
            ans = cur;
            if(pq.size()){
                int cur1 = pq.top(); pq.pop();
                if(cur == cur1){
                    if(pq.empty()) return 0;
                }else{
                    pq.push(cur-cur1);
                }
            }else{
                return cur;
            }
        }
        return ans;
    }
};