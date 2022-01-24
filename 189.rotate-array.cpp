class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        vector<int> rest;
        
        while(k--){
            rest.push_back(nums[nums.size()-1]);
            nums.pop_back();
        }
        
        reverse(rest.begin(),rest.end());
        
        for(auto &k : nums){
            rest.push_back(k);
        }
        nums = rest;
    }
};