class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 1;
        int cur = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i] == cur){
                cnt++;
                continue;
            }
            cnt--;
            if(cnt == 0){
                cur = nums[i];
                cnt = 1;
            }
        }
        return cur;
    }
};