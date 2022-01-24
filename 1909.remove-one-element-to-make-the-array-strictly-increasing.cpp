class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0;i<n;i++){
            int pre = 0;
            int j = 0;
            while(j<n){
                if(i != j){
                    if(nums[j] <= pre)break;
                    pre = nums[j];
                }
                ++j;
            }
            if(j == n) return true;
        }
        return false;        
        }
};