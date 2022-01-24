class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                st.push(i);
            }else if(s[i] == ')'){
                if(st.empty()){
                    s[i] = '#';
                }
                else if(s[st.top()] != '('){
                    while(s[st.top()] != '('){
                        int idx = st.top();
                        s[idx] = '#';
                        st.pop();
                    }
                    st.pop();
                }else{
                    st.pop();
                }
            }
        }
        
        if(!st.empty()){
            while(st.size()){
                int cur = st.top();
                s[cur] = '#';
                st.pop();
            }
        }
        
        string ans;
        for(auto &k : s){
            if(k != '#') ans.push_back(k);
        }
        return ans;
    }
};