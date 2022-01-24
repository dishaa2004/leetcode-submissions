class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        ios_base::sync_with_stdio(false), cin.tie(nullptr),cout.tie(nullptr);
        sort(nums.begin(),nums.end(), [](int x,int y) { return x % 2 < y % 2; } );
        return nums;
    }
};