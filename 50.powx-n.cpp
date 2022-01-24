#define ll long long
#define ld long double
const ll md = 1e9+7;
class Solution {
public:
    double power(double x, int y)
    {
        double temp;
        if(y == 0)
            return 1;
        temp = power(x, y / 2);
        if (y % 2 == 0)
            return temp * temp;
        else
        {
            if(y > 0)
                return x * temp * temp;
            else
                return (temp * temp) / x;
        }
    }
    double myPow(double x, int n) {
        double ans = power(x,n);
        return ans;
    }
};