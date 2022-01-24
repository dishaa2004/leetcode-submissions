class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pat) {
        vector<string> ans;
        for(auto &k : words){
            map<char,set<char>> mp;
            bool f = 0;
            for(int i=0;i<k.size();i++){
                mp[pat[i]].insert(k[i]);
            }
            set<char> tot;
            for(auto &k : mp){
                tot.insert(*k.second.begin());
                if(k.second.size() > 1){
                    f = 1;
                }
            }
            if(tot.size() != mp.size()) f = 1;
            
            if(f) continue;
            else ans.push_back(k);
        }
        return ans;
    }
};