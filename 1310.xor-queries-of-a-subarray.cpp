class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int q = queries.size();
        vector<int> pre;
        int k = 0;
        for(int i=0;i<arr.size();i++){
            k^= arr[i];
            pre.push_back(k);
        }
        
        // for(int i=0;i<pre.size();i++){
        //     cout<<pre[i]<<" ";
        // }
        
        vector<int> ans;
        for(int i=0;i<q;i++){
            int l = queries[i][0],r = queries[i][1];
            int xorr = 0;
            if(l == 0) xorr = pre[r];
            else{
                xorr = pre[r]^pre[l-1];
            }
            ans.push_back(xorr);
        }
        return ans;
    }
};