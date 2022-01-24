class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> mp;
        for(auto &k : strs){
            vector<int> f(26,0);
            for(auto &p : k){
                f[p-'a']++;
            }
            mp[f].push_back(k);
        }
        vector<vector<string>> ans;
        for(auto &k : mp){
            ans.push_back(k.second);
        }
        return ans;
    }
};