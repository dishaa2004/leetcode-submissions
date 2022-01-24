class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> mp;
        for(auto &k : s){
            mp[k]++;
        }
        priority_queue<int> pq;
        
        for(auto &k : mp) pq.push(k.second);
        int ans = 0;
        while(pq.size()){
            int cur = pq.top(); pq.pop();
            if(pq.size() == 0){
                return ans;
            }
            int cur2 = pq.top();
            
            if(cur2 == cur){
                if(cur2-1 > 0) pq.push(cur2-1);
                ans++;
            }
        }
        return ans;
    }
};