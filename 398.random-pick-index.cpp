class Solution {
public:
    map<int,vector<int>> mp;
    Solution(vector<int>& nums) {
        for(int i = 0;i < nums.size(); i++){
            mp[nums[i]].push_back(i);
        }
    }
    
    int pick(int target) {
        vector<int> to = mp[target];
        int r = rand() % to.size();
        return to[r];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */