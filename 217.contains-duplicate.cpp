class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto &k : nums) mp[k]++;
        
        for(auto &k : mp){
            int p = k.second;
            if(p>=2) return 1;
        }
        return 0;
    }
};