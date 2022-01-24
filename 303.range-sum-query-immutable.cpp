class NumArray {
public:
    vector<int> dp;
    NumArray(vector<int>& nums) {
        int cur = 0;
        for(int i=0;i<nums.size();i++)
        {
            cur += nums[i];
            dp.push_back(cur);
        }
    }
    
    int sumRange(int left, int right) {
        if(!left){
            return dp[right];
        }
        return dp[right] - dp[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */