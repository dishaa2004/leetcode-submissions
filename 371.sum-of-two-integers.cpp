const double e = 2.7182818284590452353602874713527;
class Solution {
public:
    int getSum(int a, int b) {
        return log(pow(e,a)*pow(e,b));
    }
};