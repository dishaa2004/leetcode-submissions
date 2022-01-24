class Solution {
public:
    bool buddyStrings(string s, string goal) {
        ios_base::sync_with_stdio(false), cin.tie(nullptr);
        int n = s.length();
        int pos= -1;
        for(int i=0;i<n;i++){
            if(s[i] != goal[i]){
                pos = i;
            }
        }
        if(pos == -1) {
             unordered_map<char,int> m;
            for(auto i:s){
                m[i]++;
            }
            for(auto itr=m.begin(); itr!=m.end();itr++){
                if(itr->second>1){
                    return true;
                }
            }
            return false;
        }
        
        for(int i=0;i<n;i++){
            if(i != pos){
                swap(s[i],s[pos]);
                if(s == goal) return 1;
                swap(s[i],s[pos]);
            }
        }
        return 0;
    }
};