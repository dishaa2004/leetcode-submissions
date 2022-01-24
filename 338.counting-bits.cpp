#define popcnt(x) __builtin_popcount(x)
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            ans.push_back(popcnt(i));
        }
        return ans;
    }
};