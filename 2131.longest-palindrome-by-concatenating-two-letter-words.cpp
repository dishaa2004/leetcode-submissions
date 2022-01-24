class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string,int> mp;
        for(auto &k : words){
            mp[k]++;
        }
        int len = 0;
        bool flag = 0; // For middle of palindrome
        
        for(auto &k : words){
            // Equal characters
            if(k[0] == k[1]){
                if(mp[k] >= 2){
                    len += 4;
                    mp[k] -= 2;
                }else if(mp[k] == 1){
                    flag = 1;
                }
            }else{
                string to;
                to.push_back(k[1]); to.push_back(k[0]);
                if(mp[to] > 0 && mp[k] > 0){
                    len += 4;
                    mp[k]--;
                    mp[to]--;
                }
            } 
        }
        
        if(flag) len += 2;
        
        return len;
    }
};