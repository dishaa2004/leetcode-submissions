class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(auto &k : nums){
            if(k == target){
                return 1;
            }
        }
        return 0;
    }
};