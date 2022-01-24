class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end()); // Sort by start points
        int s = intervals[0][0];
        int e = intervals[0][1];
        vector<vector<int>> ans;
        for(int i=1;i<intervals.size();i++){
            int cur_start = intervals[i][0];
            int cur_end = intervals[i][1];
            if(cur_start <= e){  // If overlapping then make ending the max of prev and cur
                e = max(e,cur_end); // **important**
            }else{
                ans.push_back({s,e}); // If not overlapping insert into ans
                s = cur_start; // Start will become current start
                e = cur_end;   // End will become current end
            }
        }
        ans.push_back({s,e});
        return ans;
    }
};