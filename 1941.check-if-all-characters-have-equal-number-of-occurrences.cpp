class Solution {
public:
    bool areOccurrencesEqual(string s) {
        if(s == "") return 1;
        unordered_map<char,int> mp;
        set<int> st;
        
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(auto &k : mp){
            st.insert(k.second);
        }
        return st.size() == 1;
    }
};