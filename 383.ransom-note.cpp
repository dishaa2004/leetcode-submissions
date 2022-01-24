class Solution {
public:
    bool canConstruct(string s1, string s2) {
        unordered_map<char,int> mp1,mp2;
        
        for(auto &k : s1) mp1[k]++;        
        for(auto &k : s2) mp2[k]++;
        int cnt = 0;
        for(auto &k : s1){
            if(mp1[k] <= mp2[k]){
                cnt++;
            }
        }
        return cnt == s1.size();
    }
};