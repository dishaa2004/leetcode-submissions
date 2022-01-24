class CombinationIterator {
public:
    vector<string> all;
    CombinationIterator(string s, int l) {
        int n = s.size();
        int pw = (1ll << n);
        for(int i = 0; i < pw; i++){
            string cur = "";
            for(int j = 0; j < n; j++){
                if(i&(1ll<<j)){
                    cur.push_back(s[j]);
                }
            }
            if(cur.size() == l){
                all.push_back(cur);
            }
        }
        sort(all.begin(),all.end());
        reverse(all.begin(),all.end());
    }
    
    string next() {
        string ans = all.back();
        all.pop_back();
        return ans;
    }
    
    bool hasNext() {
        return all.size() > 0;
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */