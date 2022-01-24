class Solution {
public:
    int calc(vector<int> &s, vector<int> &m){
        int c = 0;
        for(int i=0;i<s.size();i++) if(s[i] == m[i]) c++;
        return c;
    }
    int ans;
    void backtrack(int sz, vector<vector<int>> &pref, vector<int>& vis, int score, int index){
        if(index == sz){
            ans = max(ans,score);
            return;
        }
        
        for(int i = 0; i < sz; i++){
            if(!vis[i]){
                vis[i] = 1;
                backtrack(sz,pref,vis,score+pref[index][i],index+1);
                vis[i] = 0;
            }
        }
    }
    
    int maxCompatibilitySum(vector<vector<int>>& S, vector<vector<int>>& M) {
        int sz = S.size();
        vector<vector<int>> pref(sz,vector<int>(sz));
        for(int i=0;i<sz;i++){
            for(int j=0;j<sz;j++){
                pref[i][j] = calc(S[i],M[j]);
            }
        }
        ans = -1e9;
        vector<int> vis(sz,0);
        backtrack(sz,pref,vis,0,0);
        return ans;
    }
};