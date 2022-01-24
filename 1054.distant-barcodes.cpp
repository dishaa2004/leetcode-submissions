class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        if(barcodes.size() == 1){
            return barcodes;
        }
        priority_queue<pair<int,int>> pq;
        unordered_map<int,int> mp;
        for(auto &k : barcodes) mp[k]++;
        for(auto &k : mp) pq.push({k.second,k.first});
        vector<int> ans;
        while(pq.size()){
            pair<int,int> cur = pq.top(); pq.pop();
            if(pq.size()){
                pair<int,int> cur1 = pq.top(); pq.pop();
                ans.push_back(cur.second);
                ans.push_back(cur1.second);
                if(cur.first - 1 > 0){
                    pq.push({cur.first - 1, cur.second });
                }
                
                if(cur1.first - 1 > 0){
                    pq.push({cur1.first - 1, cur1.second });
                }
            }else{
                int sz = cur.first;
                while(sz--){
                    ans.push_back(cur.second);
                }
                return ans;
            }
        }
        return ans;
    }
};