class Solution {
public:
    int maxArea(vector<int>& h) {
        int i = 0, j = h.size()-1;
        int ans = 0;
        while(i < j){
            int c = min(h[i],h[j]) * (j-i);
            ans = max(ans,c);
            h[i] < h[j] ? i++ : j--;
        }
        return ans;
    }
};