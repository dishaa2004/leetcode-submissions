class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char,int> mp1,mp2;
        for(auto &k : word1){
            mp1[k]++;
        }
        for(auto &k : word2){
            mp2[k]++;
        }
        
        for(int i=0;i<26;i++){
            if(abs(mp1[i+'a'] - mp2[i+'a']) > 3){
                return 0;
            }
        }
        return 1;
    }
};