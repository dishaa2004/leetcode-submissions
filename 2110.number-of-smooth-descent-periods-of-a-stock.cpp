class Solution {
public:
    long long ok(long long n){
        if (n%2 == 0)
        return ((n / 2) * (n + 1));
        else return n * ( (n + 1) / 2);
    }
    long long getDescentPeriods(vector<int>& A) {
        long long l = 0;
        long long ans = 0;
        for(int i=0; i < A.size() ; i++) {
            if(l == 0) {
                l = 1;
            }else{
                if(A[i-1] - A[i]  ==  1) {
                    l ++;
                }else{
                    ans += ok(l);
                    l = 1;
                }
            }
        }
        ans += ok(l);

        return ans;
    }
};