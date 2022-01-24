class Solution {
public:
    bool judgeSquareSum(int c) {
        for(int i=0;i<=sqrt(c);i++){
            double k = c- (i*i);
            if(ceil(sqrt(k)) == floor(sqrt(k))){
                return 1;
            }
        }
        return 0;
    }
};