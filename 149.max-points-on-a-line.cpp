class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        unordered_map<double,int> mp;
        int mx = 0;
        for(int i=0;i<n;i++){
            mp.clear();
            for(int j=0;j<n;j++){
                if(i != j){
                    int x1 = points[i][0], y1 = points[i][1];
                    int x2 = points[j][0], y2 = points[j][1];
                    int num = y2 - y1;
                    int den = x2 - x1;
                    double slope =  (1.0*num)/(1.0*den);
                    mp[slope]++;
                    mx = max(mx,mp[slope]);
                }
            }
        }
        return mx+1;
    }
};