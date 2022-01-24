class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.size() <= 10){
            return {};
        }
        map<string,int> mp;
        for(int i=0;i<=s.size()-10;i++){
            string cur = "";
            for(int j=i;j<i+10;j++){
                cur.push_back(s[j]);
            }
            cout << cur << ",";
            mp[cur]++;
        }
        vector<string> ans;
        for(auto &k : mp){
            if(k.second >= 2){
                ans.push_back(k.first);
            }
        }
        return ans;
    }
};