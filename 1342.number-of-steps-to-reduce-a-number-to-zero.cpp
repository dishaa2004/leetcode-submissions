#define popcnt(x) __builtin_popcount(x)
class Solution {
public:
    int numberOfSteps(int num) {
        return num ? popcnt(num) + 31 - __builtin_clz(num) : 0;
    }
};