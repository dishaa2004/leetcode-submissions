class Solution {
public:
    string removeDuplicates(string s) {
        ios_base::sync_with_stdio(false), cin.tie(nullptr);
        //Stack implementation
        stack<char> st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(st.size() == 0){
                st.push(s[i]);
            }
            else if(st.top() == s[i]){
                st.pop();
            }
            else {
                st.push(s[i]);
            }
        }
        string ans;
        while(st.size() > 0){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};