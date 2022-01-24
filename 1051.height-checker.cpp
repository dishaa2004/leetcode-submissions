class Solution {
public:
    int heightChecker(vector<int>& h) {
        vector<int> x = h;
        sort(x.begin(),x.end());
        int ans = 0;
        for(int i=0;i<x.size();i++){
            if(x[i] != h[i]) ans++;
        }
        return ans;
    }
};