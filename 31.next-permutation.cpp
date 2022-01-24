#define all(a) a.begin(),a.end()
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(all(nums));   
    }
};