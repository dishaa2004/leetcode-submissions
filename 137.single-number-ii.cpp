class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto &k : nums){
            mp[k]++;
        }
        for(auto &k : mp){
            if(k.second != 3){
                return k.first;
            }
        }
        return -1;
    }
};