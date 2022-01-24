class Solution {
public:
    int brokenCalc(int s1, int e1) {
        long long int s = s1, e = e1;
        if(s == e){
            return 0;
        }
        if(s > e){
            return s - e;
        }
        int o=0;
        while(s < e){
            o++;
            if(e&1)
                e++;
            else e = e/2;
        }
        return o+abs(e-s);
    }
};