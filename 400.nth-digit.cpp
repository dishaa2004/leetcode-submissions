class Solution {
public:
    int findNthDigit(int n) {
        long long x = n-1;
        long long p10=9;
        for(int a=1;true;a++){
            if(x<=a*p10){
                int b=(int)(x/a+(p10/9));
                int c=x%a;
                char s[100];
                sprintf(s,"%d",b);
                return s[c]-'0';
            }
            x-=a*p10;
            p10*=10;
        }
    }
};