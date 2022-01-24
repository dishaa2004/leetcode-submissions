class Solution {
public:
    int minMoves2(vector<int>& nums) {
        if(nums.size() == 1){
            return 0;
        }
        if(nums.size() == 2){
            return abs(nums[0]-nums[1]);
        }
        sort(nums.begin(),nums.end());
        int mid = nums[nums.size()/2];
        int ans = 0;
        for(auto &k : nums){

            ans += abs(k-mid);
        }
        return ans;
    }
};