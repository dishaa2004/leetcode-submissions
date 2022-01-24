class Solution {
public:
    int specialArray(vector<int>& nums) {
        int h = nums.size()+1;
        int l = 0;
        while (l < h) {
            int m = l + ((h-l)/2);
            int num = std::count_if(nums.begin(), nums.end(), [m](int a){return a >= m;});
            if (m == num) return m;
            else if (m > num) {
                h = m;
            } else {
                l = m+1;
            }
        }
        return -1;
    }
};