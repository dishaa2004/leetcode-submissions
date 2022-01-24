class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        int n = prices.size();
        vector<int> ans(n);
        st.push(0);
        
        for(int i=1;i<n;i++){
            while(!st.empty() && prices[i] <= prices[st.top()]){
                ans[st.top()] = prices[st.top()] - prices[i];
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            ans[st.top()] = -99;
            st.pop();
        }
        
        for(int i=0;i<ans.size();i++){
            if(ans[i] == -99) ans[i] = prices[i];
        }
        
        return ans;
    }
};