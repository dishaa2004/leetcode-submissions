class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ans = 0;
        for(int bit=0;bit<32;bit++){
            int p = 0, q = 0;
            for(int i=0;i<nums.size();i++){
                if((nums[i]&(1<<bit))){
                    p++;
                }else{
                    q++;
                }
            }
            cout << p << "," << q << endl;
            ans += p*q;
        }
        
        
        return ans;
    }
};