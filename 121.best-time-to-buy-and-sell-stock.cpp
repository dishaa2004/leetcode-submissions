class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 1e9;
        int realans = 0;
        for(auto &k : prices){
            if(k < ans){
                ans = k;
            }else if(k - ans > realans){
                realans = k - ans;
            }
        }
        
        return realans;
    }
};