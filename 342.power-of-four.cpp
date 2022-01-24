class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0) return 0;
        int p = ceil(1.0*log(n)/log(4));
        if(pow(4,p) == n) return 1;
        return 0;
    }
};