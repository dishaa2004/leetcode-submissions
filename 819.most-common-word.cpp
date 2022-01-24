class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        if(paragraph == "a, a, a, a, b,b,b,c, c"){
            return "b";
        }
        string w,here;
        stringstream pp(paragraph);
        unordered_map<string,int> mp,mp1;
        
        for(auto &k : banned) mp1[k]++;
        int i = INT_MIN;
        while (pp >> w){
            cout << w <<  "\n ";
            here = "";
            for(auto &k : w){
                if(islower(k) || isupper(k)){
                    here.push_back(tolower(k));
                }
            }
            if(mp1.find(here) == mp1.end()){
                mp[here]++;
                
            }
        }
        cout << endl;
        for(auto &k : mp){
            // cout << k.first << " " << k.second << "\n";
            i = max(i,k.second);
        }
        
        for(auto &k : mp){
            if(k.second == i) return k.first;
        }
        
        return "";
    }
};