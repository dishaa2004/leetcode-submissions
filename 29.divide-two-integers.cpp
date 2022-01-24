class Solution {
public:
    int divide(int dividend, int divisor) {
        if(divisor == 0)
            return dividend >= 0? INT_MAX : INT_MIN;
        
        int cnt = 0;
        int temp =  dividend;
        
        while(dividend){
            dividend/=2;
            cnt++;
        }
        dividend= temp;
        if(cnt == 32 && divisor == -1){
            return (1<<30) + ((1<<30) - 1) ;
        }
        return dividend/divisor;
    }
};