class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        for(auto &p : mp){
            vector<int> cur = p.second;
            if(cur.size() >= 2){
                for(int i=0;i<cur.size();i++){
                    for(int j=i+1;j<cur.size();j++){
                        if(abs(cur[i] - cur[j]) <= k){
                            return 1;
                        }
                    }
                }
            }
        }
        return 0;
    }
};