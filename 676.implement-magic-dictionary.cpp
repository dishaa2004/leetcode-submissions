class MagicDictionary {
public:
    map<int,vector<string>> mp;
    MagicDictionary() {
        mp.clear();
    }
    
    void buildDict(vector<string> dict) {
        for(auto &k : dict){
            mp[k.size()].push_back(k);
        }
    }
    
    bool search(string SS) {
        vector<string> MM = mp[SS.size()];
        
        for(auto &k : MM){
            int cnt = 0;
            for(int i=0;i<k.size();i++){
                if(k[i] != SS[i]) cnt++;
            }
            if(cnt == 1){
                return 1;
            }
        }
        return 0;
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */