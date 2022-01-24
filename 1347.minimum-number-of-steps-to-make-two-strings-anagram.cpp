class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> f(26,0);
        for(auto &k : s){
            f[k-'a']++;
        }
        for(auto &k : t){
            f[k-'a']--;
        }
        int ans = 0;
        for(auto &k : f){
            ans += abs(k);
            cout << k << " ";
        }
        return ans/2;
    }
};