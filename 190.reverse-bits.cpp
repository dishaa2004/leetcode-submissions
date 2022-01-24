class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        vector<int> v;
        for(int i=0;i<32;i++){
            v.push_back( ( ((1<<i) & (n)) > 0 ? 1 : 0));
        }
        reverse(v.begin(),v.end());
        uint32_t ans = 0;
        int i = 0;
        for(auto &k : v){
            if(k == 1){
                ans += (1 << i);
            }
            i++;
        }
        return ans;
    }
};