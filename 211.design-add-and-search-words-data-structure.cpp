class WordDictionary {
public:
    map<int,vector<string>> mp;
    WordDictionary() {
        mp.clear();
    }
    
    void addWord(string word) {
        mp[word.size()].push_back(word);
    }
    
    bool search(string word) {
        int n = word.size();
        bool ans = false;
        vector<string> vv = mp[n];
        for(auto &k : vv){
            string z = k;
            if(z.size() != word.size()) continue;
            else{
                bool cur = true;
                for(int i=0;i<word.size();i++){
                    if(word[i] == '.') continue;
                    if(word[i] != z[i]) cur = false;
                }
                if(cur){
                    return 1;
                }
            }
        }
        return 0;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */