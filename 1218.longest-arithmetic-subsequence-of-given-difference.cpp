class Solution {
public:
    int longestSubsequence(vector<int>& arr, int D) {
        int n = arr.size();
        int ans = 1;
        unordered_map<int,int> mp;
        // for(auto &k : arr){
        //     mp[k]++;
        // }
        
        for(int i=0;i<n;i++){
            mp[arr[i]] = max(mp[arr[i]],mp[arr[i]-D]+1);
            ans = max(ans,mp[arr[i]]);
        }
        return ans;
    }
};