class Solution {
public:
    bool isHappy(int n) {
        if(n == 1){
            return true;
        }
        if(n < 5){
            return false;
        }
        int s = 0;
        while(n){
            s += (n%10)*(n%10);
            n/=10;
        }
        return isHappy(s);
    }
};