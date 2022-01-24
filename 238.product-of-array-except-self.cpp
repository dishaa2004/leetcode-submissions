class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre,suf(n+1);
        int prod = 1;
        pre.push_back(1);
        for(int i=0;i<nums.size();i++)
        {
            prod*=nums[i];
            pre.push_back(prod);
        }
        prod = 1;
        suf[n] = 1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            suf[i] = suf[i+1]*nums[i];
        }
        vector<int> ans(n);
        for(int i=0;i<n;i++)
        {
            ans[i] = pre[i]*suf[i+1];
        }        
        return ans;
    }
};