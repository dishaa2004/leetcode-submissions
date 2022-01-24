class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        int n = nums.size();
        vector<pair<int,int>> pre(n);
        vector<pair<int,int>> suf(n);
        
        int mn = nums[0],mx = nums[0];
        pre[0] = {mn,mx};
        
        for(int i=1;i<n;i++){
            mn = min(mn,nums[i]);
            mx = max(mx,nums[i]);
            pre[i] = {mn,mx};
        }
        
        mn = nums[n-1],mx = nums[n-1];
        suf[n-1] = {mn,mx};
        
        for(int i=n-2;i>=0;i--){
            mn = min(mn,nums[i]);
            mx = max(mx,nums[i]);
            suf[i] = {mn,mx};
        }
        int pos = 0;
        for(int i=0;i<n-1;i++){
            pair<int,int> cur1 = pre[i];
            pair<int,int> cur2 = suf[i+1];
            // cout << cur1.first << ":" << cur1.second << "," << cur2.first << ":" << cur2.second << endl;
            if(cur1.second <= cur2.first){
                return i+1;
            }
        }
        
        return pos;
    }
};