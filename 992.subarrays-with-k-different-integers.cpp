class Solution {
public:
    int help(vector<int> &A, int k){
        unordered_map<int,int> mp;
        int l = 0;
        int ans = 0;
        for(int r=0;r<A.size();r++){
            mp[A[r]]++;
            
            while(mp.size() > k){
                if(mp[A[l]] >= 2) mp[A[l]]--;
                else mp.erase(A[l]);
                l++;
            }
            ans += (r-l+1);
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return help(nums,k) - help(nums,k-1);
    }
};