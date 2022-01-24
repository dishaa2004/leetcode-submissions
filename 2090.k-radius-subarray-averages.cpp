class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        // k %= nums.size();
        if(!k){
            return nums;
        }
        vector<long long int> pre,ans;
        long long int c = 0, n =nums.size();
        for(auto &k : nums){
            c+=k;
            pre.push_back(c);
        }
        
        for(int i=0;i<n;i++){
            if(i-k >= 0 && i + k < n){
                long long int p = 2*k + 1;
                if(i-k-1 < 0){
                    ans.push_back(1ll*pre[i+k]/p);
                    cout << pre[i+k] << " ";
                }else{
                    long long int z = (pre[i+k] - pre[i-k-1]);
                    ans.push_back(z/p);
                }
                
            }else{
                ans.push_back(-1);
            }
        }
        vector<int> a;
        for(auto &k : ans){
            a.push_back((int)k);
        }
        return a;
    }
};