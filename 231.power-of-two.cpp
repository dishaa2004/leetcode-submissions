class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n < 0){
            return 0;
        }
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1; // 2 ^ 0
        }
        int p = ceil(log2(n));
        int q = floor(log2(n));
        return p == q;
    }
};