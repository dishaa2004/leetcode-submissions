class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        if(A.size() < 3){
            return 0;
        }
        int n = A.size(), ans = 0;
        vector<int> dp(n,0);
        
        for(int i=2;i<n;i++){
            if(A[i]-A[i-1] == A[i-1]-A[i-2]){
                dp[i] = dp[i-1]+1;
            }
            
            ans += dp[i];
        }
        return ans;
    }
};