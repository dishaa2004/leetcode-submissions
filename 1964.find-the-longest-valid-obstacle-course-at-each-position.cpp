class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& a) {
        int n = a.size();
        vector<int> ans,x(n+1,INT_MAX);
        x[0]=INT_MIN;
        for(int i=0;i<n;i++){
            int ii = upper_bound(x.begin(),x.end(),a[i])-x.begin();
            x[ii] = a[i];
            ans.push_back(ii);
        }
        return ans;
    }
};