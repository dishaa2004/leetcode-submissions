class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0;
        for(auto &k : nums){
            x = x^k;
        }
        return x;
    }
};