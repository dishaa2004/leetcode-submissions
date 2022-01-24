class Solution {
public:
    string smallestSubsequence(string s) {
        unordered_map<char,int> f;
        unordered_map<char,bool> vis;
        
        
        for(auto &k : s){
            f[k]++;
        }
        
        string ans = "";
        
        for(auto &k : s){
            
            f[k]--;
            
            if(vis[k]) continue;
            
            while(ans.size() && f[ans.back()] && ans.back() > k){
                vis[ans.back()] = false;
                ans.pop_back();
            }
            
            vis[k] = true;
            
            ans.push_back(k);
        }
        
        
        return ans;
    }
};