class FindSumPairs {
public:
    vector<int> v1,v2;
     map<int,int>mp;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        ios_base::sync_with_stdio(false), cin.tie(nullptr);
        v1 = nums1;
        // v2 = nums2;
        for(int i=0;i<nums2.size();i++){
            v2.push_back(nums2[i]);
            mp[nums2[i]]++;
        }
    }
    
    void add(int index, int val) {
        mp[v2[index]]--;
        v2[index]+=val;
        mp[v2[index]]++;
    }
    
    int count(int tot) {
        int cnt = 0;
        for(int i=0;i<v1.size();i++){
            int k = tot - v1[i];
            if(k > 0){
                if(mp[k] > 0){
                    cnt+=mp[k];
                }
            }
        }
        return cnt;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */