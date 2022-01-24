class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> universal(26,0);
        for(auto &k : words2){
            vector<int> f(26,0);
            for(auto &p : k){
                f[p - 'a']++;
                universal[p - 'a'] = max(universal[p - 'a'], f[p - 'a']);
            }
            
        }
        
        vector<string> ans;
        for(auto &k : words1){
            vector<int> f(26,0);
            for(auto &p : k){
                f[p - 'a']++;
            }
            
            bool flag = 1;
            
            for(int i=0;i<26;i++){
                if(f[i] < universal[i]){
                    flag = 0;
                    break;
                }
            }
            if(flag) ans.push_back(k);
        }
        return ans;
    }
};