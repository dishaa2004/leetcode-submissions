class Solution {
public:

    int longestValidParentheses(string s) {
        ios_base::sync_with_stdio(false), cin.tie(nullptr);
        int ans = 0, n = s.length();
        stack<int> st;
        st.push(-1);
        
        for(int i=0;i<n;i++){
            if(s[i] == '('){
                st.push(i);
            }else if(s[i] == ')'){
                    st.pop();
                if(st.empty()){
                    st.push(i);
                }else{
                    ans = max(ans,i - st.top());
                }
                
            }
        }
        return ans;
    }
};