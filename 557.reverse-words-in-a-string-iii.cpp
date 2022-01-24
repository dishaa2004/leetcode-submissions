class Solution {
public:
    void rev(string &s) {
        int i = 0, j = s.size()-1;
        
        while(i < j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
    #define pb push_back
    string reverseWords(string s) {
        vector<string> words;
        string str = "";
        for(int i=0;i<s.size();i++){
            if(s[i] == ' '){
                rev(str);
                words.pb(str);
                str = "";
            }else{
                str.pb(s[i]);
            }
        }
        rev(str);
        words.pb(str);
        string ans = "";
        for(auto &k : words) ans += k+" ";
        ans.pop_back();
        return ans;
    }
};