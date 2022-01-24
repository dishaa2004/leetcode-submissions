class Solution {
public:
    int maxSatisfaction(vector<int>& s) {
        sort(s.begin(),s.end());
        
        // take it or not - negative
        int n = s.size();
        int ans = -1e9;
        for(int i=0;i<n;i++){
            int cur = 0;
            int idx = 1;
            for(int j=i;j<n;j++){
                cur += idx*s[j];
                idx++;
            }
            ans = max(ans,cur);
        }
        if(ans < 0) ans = 0;
        return ans;
    }
};