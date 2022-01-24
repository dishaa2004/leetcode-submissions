class Solution {
public:
    bool ok(string s, vector<int> &f){
        bool cantake = true;
        for(auto &k : s){
            if(!f[k-'a']) cantake = false;
        }
        if(cantake == false) return false;
        for(int i = 0;i<s.size();i++){
            f[s[i] - 'a']--;
        }
        return 1;
    }
    // The digits 0,2,4,8 all even digits have unique characters
    string originalDigits(string s) {
        vector<int> digits(10,0);
        unordered_map<int,int> digitmap = {
            {0,0},{1,2},{2,4},{3,6},{4,8},{5,1},{6,3},{7,5},{8,7},{9,9}  
        };
        vector<string> W = {"zero", "two", "four", "six", "eight", "one", "three", "five", "seven", "nine"};
        
        vector<int> f(26,0);
        for(auto &ch : s){
            f[ch - 'a']++;
        }
        
        for(int i=0;i<W.size();i++){
            while(ok(W[i],f)){
                digits[digitmap[i]]++;
            }
        }
        string ans = "";
        for(int i=0;i<W.size();i++){
            while(digits[i] > 0){
                ans.push_back(i+'0');
                digits[i]--;
            }
        }
        return ans;
    }
};