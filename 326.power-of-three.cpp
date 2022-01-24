class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return 0;
        int p = ceil(1.0*log(n)/log(3));
        if(pow(3,p) == n) return 1;
        return 0;
    }
};