class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
    vector<int> ans(n, 0);
    int sum = accumulate(rolls.begin(), rolls.end(), 0);
    int x = mean*((int)rolls.size() + n) - sum;
    int rem = x % n;
    x /= n;    
    
    if(x <= 0 || x > 6)
    return {};

    for(int i=0; i<ans.size(); i++) {
        ans[i] = x + (rem-- > 0);
        if(ans[i] <= 0 || ans[i] > 6)
        return {};
    }
    return ans;
    }
};
