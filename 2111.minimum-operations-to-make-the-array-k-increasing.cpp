class Solution {
public:
    int ok(vector<int> sub){
        vector<int> cur(sub.size(), 0);
        int l = 1, h = sub[0];
        cur[0] = h;
        for(int i = 1;i <sub.size(); i++){
            auto it = upper_bound(cur.begin(),cur.begin()+l,sub[i]);
            if(it == cur.begin()+l){
                cur[l] = sub[i];
                l++;
            }else{
                *it = sub[i];
            }
        }
        return l;
    }
    int kIncreasing(vector<int>& arr, int k) {
        int ans = 0, sz = 0;
        int n = arr.size();
        for(int i = 0; i < k; i++){
            vector<int> sub;
            sz = 0;
            for(int j = i; j < arr.size(); j+=k){
                sub.push_back(arr[j]);
                sz++;
            }
            ans += (sz - ok(sub));
        }
        return ans;
    }
};