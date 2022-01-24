class Solution {
public:
    long long n,A[100010],B[100010];
    long long gridGame(vector<vector<int>>& grid) {
        vector<int> a = grid[0];
        vector<int> b = grid[1];
        
        n = grid[0].size();
        
        for(int i=1;i<=n;i++){
            A[i] = a[i-1];
            A[i] += A[i-1];
        }
        
        for(int i=1;i<=n;i++){
            B[i] = b[i-1];
            B[i] += B[i-1];
        }
        long long sum=LONG_LONG_MAX;
        for(int i=1;i<=n;i++){
         sum= min(sum,max(A[n]-A[i],B[i-1]));
          
        }
        return sum;
    }
};