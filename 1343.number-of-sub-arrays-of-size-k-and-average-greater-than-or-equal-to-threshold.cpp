class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int th) {
        if(nums.size() < k) return 0;
        int pre = 0;int ans = 0;
        
        for(int i=0;i<k;i++){
            pre+= nums[i];
        }
        if( pre/k >= th ) ans++;
        
        // Sliding Window Approach
        for(int i=k;i<nums.size();i++)
        {
            pre += nums[i] - nums[i-k];
            if(pre/k >= th) ans++;
        }
        
        return ans;
    }
};