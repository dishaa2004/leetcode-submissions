class Solution {
public:
    int maximumSwap(int num) {
        set<int> st;
        st.insert(num);
        string s = to_string(num);
        for(int i=0;i<s.size();i++){
            for(int j=0;j<s.size();j++){
                if(i!=j){
                    swap(s[i],s[j]);
                    st.insert(stoi(s));
                    swap(s[i],s[j]);
                }
            }
        }
        auto it = --st.end();
        return *it;
    }
};