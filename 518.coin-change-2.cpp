class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> ways(amount+1,0);
        ways[0] = 1;
        
        for(auto &k : coins){
            for(int i=1;i<=amount;i++)
            if(k<=i){
                ways[i] += ways[i-k];
            }
        }
        return ways[amount];
    }
};