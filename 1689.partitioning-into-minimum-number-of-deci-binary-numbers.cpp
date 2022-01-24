class Solution {
public:
    int minPartitions(string n) {
        ios_base::sync_with_stdio(false), cin.tie(nullptr);
        int maxx = INT_MIN;
        
        for(int i=0;i<n.length();i++){
            int k = n[i] - '0';
            maxx = max(maxx,k);
        }
        return maxx;
    }
};