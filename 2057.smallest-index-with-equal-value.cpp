class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int i=0;
        for(auto &k : nums){
            if(i%10 == k) return i;
            i++;
        }
        return -1;
    }
};