class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        map<int,set<int>> mp;
        for(auto &k : logs){
            mp[k[0]].insert(k[1]);
        }
        vector<int> ans(k,0);
        
        for(auto &k : mp){
            ans[k.second.size()-1]++;
        }
        return ans;
    }
};