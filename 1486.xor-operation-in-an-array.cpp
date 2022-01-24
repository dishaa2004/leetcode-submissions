class Solution {
public:
    int xorOperation(int n, int start) {
        
        vector<int> v;
        for(int cnt=0;cnt<n;cnt++)
        {
            v.push_back(start + 2*cnt);
        }
        int xorr = v[0];
        for(int i=1;i<v.size();i++)
        {
            xorr ^= v[i];
        }
        return xorr;
        
    }
};