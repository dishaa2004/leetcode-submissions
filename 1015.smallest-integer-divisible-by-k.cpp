class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k % 2 == 0) return -1;
        if(k % 5 == 0) return -1;
        
        int r = 1, l = 1;
        while(1){
            r = r%k;
            if(r == 0) return l;
            r = r*10 + 1;
            l++;
        }
        return l;
    }
};