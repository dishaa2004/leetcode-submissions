class RangeFreqQuery {
public:
    unordered_map <int,vector<int>> pos;
    RangeFreqQuery(vector<int>& arr) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        for (int i=0; i<arr.size();i++){
            pos[arr[i]].push_back(i+1);
        }
    }
    
    int query(int l, int r, int x) {
        l++,r++;
        r = upper_bound(pos[x].begin(), pos[x].end(), r) - pos[x].begin();
        l = lower_bound(pos[x].begin(), pos[x].end(), l) - pos[x].begin();
        return r-l;
    }
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */