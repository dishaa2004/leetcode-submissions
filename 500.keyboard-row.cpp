class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        string row1 = "qwertyuiopQWERTYUIOP",row2 = "asdfghjklASDFGHJKL",
        row3 = "zxcvbnmZXCVBNM";
        unordered_map<char,int> mp;
        
        for(auto &k : row1){
            mp[k]=1;
        }
        for(auto &k : row2){
            mp[k]=2;
        }
        for(auto &k : row3){
            mp[k]=3;
        }
        
        for(auto &k : words){
            unordered_map<int,int> mp1;
            for(auto &p : k){
                mp1[mp[p]]++;
            }
            if(mp1.size() == 1){
                ans.push_back(k);
            }
        }
        return ans;
    }
};