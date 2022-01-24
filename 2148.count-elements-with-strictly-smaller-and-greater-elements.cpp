class Solution {
public:
    int countElements(vector<int>& nums) {
        if(nums.size() < 2){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int s = nums[0];
        int e = nums.back();
        int ams = 0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i] > s && nums[i] < e) ams++;
        }
        return ams;
    }
};