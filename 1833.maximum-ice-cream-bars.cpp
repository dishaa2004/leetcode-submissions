class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int ans = 0;
        for(auto &k : costs){
            if(k > coins){
                break;
            }else{
                ans++;
                coins -= k;
            }
        }
        return ans;
    }
};