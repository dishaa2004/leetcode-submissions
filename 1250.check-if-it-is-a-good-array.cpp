class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums[0] == 1;
        }
        if(n == 2){
            return __gcd(nums[0],nums[1]) == 1;
        }
        int p = nums[0];
        for(int i=1;i<n;i++) p = __gcd(nums[i],p);
        
        return p == 1;
    }
};