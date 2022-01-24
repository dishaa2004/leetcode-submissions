class Solution {
public:
    int evalRPN(vector<string>& tt) {
        stack<int> st;
        for(int i=0;i<tt.size();i++){
            if(tt[i] == "*"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(a*b);
            }else if(tt[i] == "+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(a+b);
            }else if(tt[i] == "-"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b-a);
            }else if(tt[i] == "/"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b/a);
            }else{
                int k = 0;
                stringstream gg(tt[i]);
                gg >> k;
                st.push(k);
            }
        }
        return st.top();
    }
};