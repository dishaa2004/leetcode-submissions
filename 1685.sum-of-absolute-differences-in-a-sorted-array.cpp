class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n), pre(n),suf(n);
        int cur = 0;
        for(int i=0;i<n;i++){cur += nums[i];pre[i] = cur;}
        cur = 0;
        for(int i=n-1;i>=0;i--){cur += nums[i];suf[i] = cur;}
        
        for(int i=0;i<n;i++){
            if(i==0){
                ans[i] = suf[i+1] - (n-1)*nums[i];
            }else if(i == n-1){
                ans[i] = (n-1)*nums[i] - pre[i-1];
            }else{
                int prev = pre[i-1];
                int after = suf[i+1];
                ans[i] = (i*nums[i]) - prev + after - ((n-i-1)*nums[i]); 
            }
        }
        
        
        
        return ans;
    }
};