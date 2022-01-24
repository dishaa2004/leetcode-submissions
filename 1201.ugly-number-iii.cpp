#define gcd(a,b) __gcd(a,b)

class Solution {
public:
    int lcm(int a,int b) {
        if(a >= INT_MAX || b >= INT_MAX) 
            return INT_MAX; 
        else 
        {
            if(INT_MAX/(a/__gcd(a,b)) < b) return INT_MAX;
            else return a / __gcd(a,b) * b;
        }
    }
    int nthUglyNumber(int n, int a, int b, int c) {
        int ab = lcm(a,b);
        int bc = lcm(b,c);
        int ca = lcm(a,c);
        int abc = lcm(ab,c);
        int lo = 1,hi = 2000000000,m,x;
        while(lo<hi){
            m = lo/2 + hi/2 +(lo%2 + hi%2)/2;
            x = m/a + m/b + m/c - m/ab - m/bc - m/ca + m/abc;
            if(n <= x) 
                hi = m;
            else 
                lo = m+1;
        }
        
        return lo;
    }
};