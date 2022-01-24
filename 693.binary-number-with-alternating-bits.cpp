#define popcnt(x) __builtin_popcount(x)
class Solution {
public:
    bool hasAlternatingBits(int n) {
        long long wxor = n>>1;
        long long k = n^wxor;
        
        if((long long) k & (k+1)){return false;}
        else return true;
    }
};