class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        map<char,int> mp;
        for(int i=0;i<brokenLetters.length();i++){
            mp[brokenLetters[i]]++;
        }
        vector<string> words;
        string s = "";
        for(int i=0;i<text.size();i++){
            if(text[i] == ' '){
                words.push_back(s);
                s = "";
            }else if(i == text.size()-1){
                s.push_back(text[i]);
                words.push_back(s);
                s = "";
            }
            else
            s.push_back(text[i]);
        }
        // int blank = 0;
        // for(int i=0;i<text.size();i++){
        //     if(text[i] == ' ');
        //     blank++;
        // }
        // if(blank == 0){
        //     words.push_back(text);
        // }
        int ans = 0;
        for(int i=0;i<words.size();i++){
            bool flag = 0;
            for(int j=0;j<words[i].length();j++){
                if(mp.find(words[i][j]) != mp.end()){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                ans++;
            }
        }
        
        return ans;
    }
};