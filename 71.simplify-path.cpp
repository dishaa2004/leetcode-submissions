class Solution {
public:
    string simplifyPath(string path) {
        string cur = "";
        vector<string> words;
        int n = path.size();
        for(int i=0;i<n;i++){
            if(path[i] == '/'){
                if(cur == ".") cur = "";
                if(cur.size()){
                    words.push_back(cur);
                    cur = "";
                }
            }else if(i+3<n && path[i] == '.' && path[i+1] == '.' && path[i+2]=='.' && path[i+3] == '/' && !cur.size()){
                if(cur.size()){
                    words.push_back(cur);
                    cur = "";
                }
                words.push_back("..."); i++; i++; i++;
            }else if(i+2<n &&path[i] == '.' && path[i+1] == '.' && path[i+2] == '/' &&  !cur.size()){
                words.push_back("#"); i++; i++;
            }else{
                cur.push_back(path[i]);
            }
        }
        
        if(cur.size() && cur != "."){
            if(cur == ".."){
                words.push_back("#");
            }else{
                words.push_back(cur);
            }
            cur = "";
        }
        
        while(words.size() && words[0] == "#"){
            words.erase(words.begin());
        }
        stack<string> st;
        
        for(auto &k : words){
            cout << k << " ";
            if(k == "#"){
                if(st.size()) st.pop();
            } 
            else{
                st.push(k);
            } 
        }
        words.clear();
        while(st.size()){
            words.push_back(st.top());
            st.pop();
        }
        reverse(words.begin(),words.end());
        
        
        string ans = "/";
        
        for(auto &k : words){
            ans += k;
            ans += "/";
        }
        if(ans != "/" && ans.size())
            ans.pop_back();
        
        return ans;
    }
};