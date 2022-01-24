class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int> mp;
        for(auto &k : words){
            for(auto &p : k){
                mp[p]++;
            }
        }
        
        for(auto &k : mp){
            if(k.second % words.size() != 0){
                return 0;
            }
        }
        return 1;
    }
};