class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> f(26,0);
        for(auto &k : text){
            int i = k - 'a';
            f[i]++;
        }
        return min({f['b'-'a'],f['a'-'a'],f['l'-'a']/2,f['o'-'a']/2,f['n'-'a']});
    }
};