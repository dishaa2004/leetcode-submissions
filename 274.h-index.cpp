class Solution {
public:
    int hIndex(vector<int>& ct) {
        sort(ct.begin(),ct.end());
        int n = ct.size();
        for(int i=n;i>=1;i--){
            if(ct[n-i] >= i){
                return i;
            }
        }
        return 0;
    }
};