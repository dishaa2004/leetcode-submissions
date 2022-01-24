class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
         ios_base::sync_with_stdio(false), cin.tie(nullptr);
        sort(nums.begin(),nums.end());
        return nums;
    }
};