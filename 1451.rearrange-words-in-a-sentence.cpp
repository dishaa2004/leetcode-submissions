class Solution {
public:
    string arrangeWords(string text) {
        text[0] = text[0]+32;
        int n = text.size();vector<string> w;
        string s = "";
        for(int i=0;i<n;i++){
            if(text[i] == ' '){
                w.push_back(s);
                s = "";
            }
            if(i == n-1){
                s.push_back(text[i]);
                w.push_back(s);
                s="";
            }
            
            if(text[i]!=' ')
            s.push_back(text[i]);
        }        
        
        stable_sort(w.begin(),w.end(),
                 [](const auto &s1, const auto &s2) { return s1.length() < s2.length(); });
        string ans = "";
        for(int i=0;i<w.size();i++){
            // cout<<w[i]<<endl;
            ans += w[i];
            ans += " ";
        }
        ans.pop_back();
        ans[0] = toupper(ans[0]);
        return ans;
    }
};