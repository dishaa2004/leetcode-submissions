class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt = 0;
        if(nums.back () > nums.front()) cnt++;
        
        for(int i=1;i<nums.size();i++){
            if(nums[i-1] > nums[i]) cnt++;
        }
        
        if(cnt <= 1) return true;
        else return false;
    }
};