class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(auto &k : nums) mp[k]++;
        
        for(auto &k : mp){
            if(k.second >=2 ) ans.push_back(k.first);
        }
        return ans;
    }
};