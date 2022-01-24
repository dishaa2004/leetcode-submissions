class Solution {
public:
    int maxProfit(vector<int>& prices) {
        stack<int> st;
        int ans = 0;
        st.push(prices.back());
        for(int i = prices.size() - 2; i >= 0; i--){
            int cur = prices[i];
            if(cur < st.top()){
                ans += st.top() - cur;
                st.push(cur);
            }else{
                st.push(cur);
            }
        }
        return ans;
    }
};