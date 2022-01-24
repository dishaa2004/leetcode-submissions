class Solution {
public:
    string findLongestWord(string s, vector<string>& dict) {
        vector<string> can;
        for(auto &cur : dict){
            // string cur = k;
            int i = 0, j = 0;
            while(i < s.size() && j < cur.size()){
                if(s[i] == cur[j]){
                    i++;
                    j++;
                }else{
                    i++;
                }
            }
            if(j == cur.size()){
                can.push_back(cur);
            }
        }
        sort(can.begin(),can.end(),[](const auto &a, const auto &b){
            if(a.size() != b.size()){
                return a.size() > b.size();
            }
            return lexicographical_compare(a.begin(),a.end(),b.begin(),b.end());
        });
        if(can.size())
        return can[0];
        return "";
    }
};