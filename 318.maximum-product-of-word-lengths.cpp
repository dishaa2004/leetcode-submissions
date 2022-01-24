class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n = words.size();
        vector<vector<int>> FREQ(n);
        int i = 0;
        for(auto &k : words){
            int j = 0;
            vector<int> f(26,0);
            for(auto &ch : k){
                f[ch-'a']++;
                j++;
            }
            FREQ[i] = f;
            i++;
        }
        int ans = 0;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words.size();j++){
                if(i != j){
                    bool can = true;
                    for(int k=0;k<26;k++){
                        if(FREQ[i][k] && FREQ[j][k]){
                            can = false;
                            break;
                        }
                    }
                    if(can){
                        int m = words[i].length();
                        int n = words[j].length();
                        ans = max(ans,m*n);
                    }
                }
            }
        }
        return ans;
    }
};