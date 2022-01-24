class Solution {
public:
    vector<int> digits = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    vector<vector<int>> ans;
    void help(vector<int> cur, int sum, int idx, int k, int n){
        
        if(sum > n){
            return;
        }
        
        if(cur.size() == k && sum == n){
            ans.push_back(cur);
            return;
        }
        
        for(int i = idx; i < 9; i++){
            cur.push_back(digits[i]);
            help(cur,sum + digits[i], i + 1, k, n);
            cur.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        help({},0,0,k,n);
        return ans;
    }
};