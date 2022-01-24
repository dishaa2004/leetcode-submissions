class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        int n = s.length();
        string cur = "";
        for(int i=0;i<n;i++){
            if(s[i] == ' ' || i == n-1){
                if(i == n-1)
                    cur.push_back(s[i]);
                
                if(cur != "" && cur != " ")
                    words.push_back(cur);
                
                cur = "";
            }
            
            if(s[i] != ' ')
            cur.push_back(s[i]);
        }
        reverse(words.begin(),words.end());
        
        string ans = "";
        for(auto &s : words){
            ans += s;
            ans += " ";
        }
        ans.pop_back();
        
        return ans;
    }
};