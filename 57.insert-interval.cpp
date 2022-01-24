class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& iv) {
        sort(iv.begin(),iv.end());
        int s = iv[0][0],e = iv[0][1];
        vector<vector<int>> ans;
        for(auto &k : iv){
            if(k[0] == s && k[1] == e){
                continue;
            }else{
                if(k[0] <= e){
                    e = max(k[1],e);
                }else{
                    ans.push_back({s,e});
                    s=k[0],e=k[1];
                }
            }
        }
        ans.push_back({s,e});
        return ans;
    }
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        return merge(intervals);
    }
};