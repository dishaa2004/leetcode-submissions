class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(nums.begin(),nums.end());
        
        int i = 0, j = nums.size() - 1;
        
        while(i < j){
            if(nums[i] == sorted[i]) i++;
            else if(nums[j] == sorted[j]) j--;
            else break;
        }
        
        if(j <= i) return 0;
        
        return j-i+1;
    }
};