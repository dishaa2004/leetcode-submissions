class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long int x = 0;
        for(auto &k : nums){
            x ^= k;
        }
        
        long long int k1 = x & -x;
        int a = 0, b = 0;
        
        for(auto &k : nums){
            if(k&k1){
                a ^= k;
            }else{
                b ^= k;
            }
        }
        
        
        return {a,b};
        
        
    }
};