class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        unordered_map<int,int> mp;
        for(auto &k : nums) mp[k]++;
        for(auto &k : mp) pq.push({k.second,k.first});
        vector<int> ans;
        while(pq.size() && k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};