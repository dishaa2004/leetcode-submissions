class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
        long double tt = 0;
        long long uu =0;
        while(neededApples>tt){
        uu++;

        tt +=12*pow(uu,2);
        }

        return uu*8;
    }
};