class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        unordered_set<string> S(words.begin(),words.end());
        
        for(string s:S)
        {
            for(int i=1;i<s.size();++i)
                S.erase(s.substr(i));
        }
        int n = 0;
        for(string s:S)
            n+=s.size()+1;
        return n;
        
    }
};