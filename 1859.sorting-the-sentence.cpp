class Solution {
public:
string sortSentence(string s) {
        vector<pair<int,string>> vp;
        vector<string> words;
        string ss;
        for(int i=0;i< s.length();i++){
            if(i == s.length()-1 || s[i] == ' '){
                if(i == s.length() - 1){
                    ss.push_back(s[i]);
                }
                words.push_back(ss);
                ss = "";
                if(s[i] == ' ') i++;
            }
            ss.push_back(s[i]);
        }
        for(int i=0;i< words.size();i++){
            string work = words[i];
            int idx = work[work.length()-1];
            work.pop_back();
            vp.push_back({idx,work});
        }
        sort(vp.begin(),vp.end());string ans = "";
        for(auto &k : vp){
            ans += k.second;
            ans += " ";
        }
        ans.pop_back();
        return ans;
    }
};