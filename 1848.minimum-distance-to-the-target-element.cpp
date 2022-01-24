class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int pos = 0,k=0,q=0;
        int ans = INT_MAX;
        bool flag = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                pos = i;
                q++;
                int k = abs(i - start);
                ans = min(ans,k);
            }
        }
        if(q==nums.size())
            return 0;
        return ans;
    }
};