class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int n = word.length();
        unordered_map<string,int> mp;
        for (int len = 1; len <= n; len++)
        {   
            for (int i = 0; i <= n - len; i++)
            {
                int j = i + len - 1;  
                string cur = "";
                for (int k = i; k <= j; k++)
                    cur.push_back(word[k]);
                
                mp[cur]++;
            }
        }
        
        int ans = 0;
        for(auto &k : patterns){
            if(mp.find(k)!=mp.end()) ans++;
        }
        return ans;
    }
};