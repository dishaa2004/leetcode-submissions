class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> a;
        
        for(auto &k : nums) a.push_back(k*k);
        
        
        sort(a.begin(),a.end());
        
        return a;
    }
};