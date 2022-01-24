class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans;
        
        map<string,int> mp;
        
        string s="";
        for(int i=0;i<s1.size();i++){
            if(s1[i] == ' '){
                mp[s]++;
                s="";
            }else if(i == s1.size()-1){
                s.push_back(s1[i]);
                mp[s]++;
                s="";
                break;
            }
            
            if(s1[i] != ' ')
            s.push_back(s1[i]);
        }

        for(int i=0;i<s2.size();i++){
            if(s2[i] == ' '){
                mp[s]++;
                s="";
            }else if(i == s2.size()-1){
                s.push_back(s2[i]);
                mp[s]++;
            }
            
            if(s2[i] != ' ')
            s.push_back(s2[i]);
        }
        
        for(auto &k : mp){
            if(k.second == 1){
                ans.push_back(k.first);
            }
        }
 
        return ans;
        
    }
};