class Solution {
public:
    string freqAlphabets(string s) {
        map<int,int> mp;
        unordered_map<int,char> mp1;
        
        for(int i=0;i<26;i++){
            mp1[i+1] = 'a'+i;
        }
        
        for(int i=0;i<s.size();i++){
            if(s[i] == '#'){
                mp[i-2]++;
            }
        }
        string ans = "";
        
        for(int i=0;i<s.size();i++){
            if(mp[i]){
                int x = 10*(s[i]-'0') + (s[i+1]-'0');
                ans.push_back(mp1[x]);
                i+=2;
            }else{
                ans.push_back(mp1[s[i]-'0']);
            }
        }
        return ans;
    }
};