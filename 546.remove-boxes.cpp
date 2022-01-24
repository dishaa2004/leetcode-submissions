class Solution {
public:
    int dp[100][100][100];
    int help(vector<int>& bb, int i, int j, int k)
    {
        if(i>j) return 0;
        if(dp[i][j][k]!=-1) return dp[i][j][k];
        int res = (k+1)*(k+1)+help(bb,i+1,j,0);
        for(int it=i+1; it<=j; it++)
            if(bb[it]==bb[i]) 
                res = max(res,help(bb,i+1,it-1,0)+help(bb,it,j,k+1));
        return dp[i][j][k]=res;
    }
    int removeBoxes(vector<int>& bb) {
        memset(dp,-1,sizeof dp);
        int ans = help(bb, 0, bb.size()-1, 0);   
        return ans;
    }
};