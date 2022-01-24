class Solution {
public:
    int sumBase(int n, int k) {
        string str;
        int d,sum=0;
        while(n > 0)
        {
            d = n % k;
            sum+=d;
            n /= k;
        } 
        return sum;
    }
};