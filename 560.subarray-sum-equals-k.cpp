class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size(), prefixSum = 0, res = 0;
        unordered_map<int,int> count;
        count[0]++;
        for (int i = 0; i < n; i++) {
            prefixSum += nums[i];
            
            res += count[prefixSum - k];
            
            count[prefixSum]++;
        }
        
        return res;
    }
};