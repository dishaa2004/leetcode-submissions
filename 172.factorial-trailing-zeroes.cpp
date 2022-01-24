class Solution {
public:
    int trailingZeroes(int n) {
        if(n<5) return 0;
        if(n==5) return 1;
        
        int ans = 0;
        for(int i=5;i<=n;i*=5){
            ans += (n/i);
        }
        return ans;
    }
};