class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& A) {
        int ans = 0;
        map<int,int> mp;
        for(int i=0;i<A.size();i++){
            if(A[i]%60 == 0){
                ans += mp[0];
            }else{
                ans += mp[60-A[i]%60];
            }
            mp[A[i]%60]++;
        }
        return ans;
    }
};