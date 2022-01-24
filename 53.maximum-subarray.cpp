class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx = nums[0];
        int cur = nums[0];
        
        for(int i=1;i<nums.size();i++){
            if(cur+nums[i]<0){
                cur = nums[i];
            }else{
                cur = max(nums[i],cur+nums[i]);
            }
                
            mx = max(mx,cur);
        }
        return mx;
    }
};