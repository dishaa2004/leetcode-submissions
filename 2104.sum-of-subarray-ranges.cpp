class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long ans = 0;
        
        vector<int> mn,mx;
        
        for(int i=1;i<nums.size();i++){
            vector<int> tmn = {min(nums[i],nums[i-1])};
            vector<int> tmx = {max(nums[i],nums[i-1])};
            
            ans += tmx[0] - tmn[0];
            
            for(int k=0;k<mn.size();k++){
                int mna = min(mn[k],nums[i]);
                int mxa = max(mx[k],nums[i]);
                tmn.push_back(mna),tmx.push_back(mxa);
                ans += (mxa - mna);
            }
            mn = tmn;
            mx = tmx;
        }
        return ans;
    }
};