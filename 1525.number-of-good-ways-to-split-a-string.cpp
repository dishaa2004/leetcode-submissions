class Solution {
public:
    int numSplits(string s) {
        int n = s.size();
        vector<int> pre(n),suf(n);
        set<char> st;
        for(int i=0;i<n;i++){
            st.insert(s[i]);
            pre[i] = st.size();
        }
        st.clear();
        for(int i=n-1;i>=0;i--){
            st.insert(s[i]);
            suf[i] = st.size();
        }
        int ans = 0;
        for(int i=0;i<n-1;i++){
            if(pre[i] == suf[i+1]) ans++;
        }
        
        return ans;
    }
};