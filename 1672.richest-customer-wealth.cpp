class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0,sum=0;
        int n = accounts.size();
        for (int i = 0; i < n; ++i) {
        for (int j = 0; j < accounts[i].size(); ++j) {
            sum = sum + accounts[i][j];
        }
            if(sum>=max)
                max = sum;
 
        sum = 0;
    }
        return max;
    }
};