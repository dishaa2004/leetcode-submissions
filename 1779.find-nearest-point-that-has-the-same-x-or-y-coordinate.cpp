class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        vector<pair<int,int>> vp;
        int i = 0;
        for(auto &k : points){
            int a = k[0];
            int b = k[1];
            if(a == x || b == y){
                int dis = abs(x-a) + abs(y-b);
                vp.push_back({dis,i});
            }
            i++;
        }
        sort(vp.begin(),vp.end());
        if(vp.size())
            return vp[0].second;
        return -1;
    }
};