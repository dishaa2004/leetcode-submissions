class Solution {
public:
    int findComplement(int num) {
        int r = log2(num);
        r = pow(2,r+1)-1;
        return r^num ;
    }
};