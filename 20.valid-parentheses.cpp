class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto &k : s){
            if(k == '{' || k == '(' || k == '['){
                st.push(k);
            }else{
                if(st.empty()){
                    return 0;
                }
                
                if(k == ']'){
                    if(st.top() != '[') return 0;
                }
                
                if(k == ')'){
                    if(st.top() != '(') return 0;
                }
                
                if(k == '}'){
                    if(st.top() != '{') return 0;
                }
                st.pop();
            }
        }
        return st.empty() == true;
    }
};