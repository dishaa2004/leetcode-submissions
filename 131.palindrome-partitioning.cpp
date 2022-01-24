class Solution {
public:
    bool isPalindrome(string &s) {
        int l = 0, r = s.size()-1;
        while (l < r) {
            if (s[l++] != s[r--]) {
                return false;
            }
        }
        return true;
    }
    vector<vector<string>> ans;
    void ok(string &s, int index, vector<string> &path){
        if(index >= s.size()){
            ans.push_back(path);
            return;
        }
        
        for(int i=index;i<s.size();i++){
            string cur = s.substr(index,i-index+1);
            if(isPalindrome(cur)){
                path.push_back(cur);
                ok(s,i+1,path);
                path.pop_back();
            }
        }
        return;
    }
    vector<vector<string>> partition(string s) {
        ans.clear();
        if(s.size() == 0){
            return ans;
        }
        vector<string> path;
        ok(s,0,path);
        return ans;
    }
};