class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        if(s.size() < p.size()){
            return {};
        }
        if(s.size() == p.size()){
            sort(s.begin(),s.end());
            sort(p.begin(),p.end());
            if(s == p){
                return {0};
            }
            return {};
        }
        vector<int> count1(26), count2(26), ans;
        
        for(char ch: p) count2[ch- 'a']++;
        
        for(int i=0; i<s.length();i++){
            count1[s[i]-'a']++;
            if(i>=p.length()){
                count1[s[i-p.length()]-'a']--;
            }
            
            if(count1==count2){
                ans.push_back(i-p.length()+1);
            }
        }
        return ans;
    }
};