class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int i=1;
        for(auto &k : nums) mp[k] = i++;
        
        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i]) != mp.end()){
                if(mp[target-nums[i]]-1 != i){
                    return {i,mp[target-nums[i]]-1};
                }
            }
        }
        
        return {};
    }
};