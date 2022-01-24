class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int l = 0, h = 0;
        int n = nums.size();
        int pro = 1;
        int cnt = 0;
        while(h<n){
            pro *= nums[h];
            while(pro>=k) pro /= nums[l++];
            cnt += 1+(h-l);
            h++;
        }
        return cnt;
    }
};