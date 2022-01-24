class Solution {
public:
    // int mx[10000005];
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto &k : nums){
            mp[k]++;
        }
        vector<int> ans;
        for(auto &k : nums){
            if(mp[k] >= 2) continue;
            
            if(mp.find(k-1) == mp.end()){
                if(mp.find(k+1) == mp.end()){
                    ans.push_back(k);
                }
            }
        }
        
        return ans;
    }
};