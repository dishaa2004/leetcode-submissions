class Solution {
public:
    vector<char> ar = {'a','e','i','o','u'};
    int ans = 0;
    void backtrack(int n,string &s){
        if(s.size() == n){
            ans += 1;
            return;
        }
        for(auto &k : ar){
            if(s.size()){
                if(s.back() > k) continue;
                else{
                    s.push_back(k);
                    backtrack(n,s);
                    s.pop_back();
                }
            }else{
                s.push_back(k);
                backtrack(n,s);
                s.pop_back();
            }
        }
        return;
    }
    int countVowelStrings(int n) {
        if(n == 1){
            return 5;
        }
        string cur = "";
        ans = 0;
        backtrack(n,cur);
        return ans;
    }
};