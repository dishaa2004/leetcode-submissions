class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);

        for(auto &k : s){
            if(k == '('){
                st.push(0);
            }else{
                int d1 = st.top(); st.pop();
                int d2 = st.top(); st.pop();
                st.push(d2 + max(1,2*d1));
            }
        }
        return st.top();
    }
};