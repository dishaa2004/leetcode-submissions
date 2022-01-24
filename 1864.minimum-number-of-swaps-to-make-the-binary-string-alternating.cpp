#define ll long long
class Solution {
public:
     
    int F(string s, char first) 
    {
        char c = first;
        int m = 0;
        for(int i = 0; i < s.size(); i++) {
            if(c != s[i]) {
                m++;
            }
            if(c == '1') {
                c = '0';
            } else {
                c = '1';
            }
        }
        return m / 2;
    }
    int minSwaps(string s) {
         int one = 0;
        int zero = 0;
        
        for(int i = 0; i < s.size(); i++) {
            one += (s[i] == '1');
            zero += (s[i] == '0');
        }
        
        if(abs(zero - one) > 1) {
            return -1;
        }
        
        if(zero > one) { // need to start with 0
            return F(s, '0');
        } else if(one > zero) { // need to start with 1
            return F(s, '1');
        } else {
            return min(F(s, '0'), F(s, '1'));
        }
        
    }
};