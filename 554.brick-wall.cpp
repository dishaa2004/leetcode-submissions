class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int,int> mp;
        int e = 0;
        for(auto &row : wall){
            int end = 0;
            for(int b = 0; b < row.size()-1;b++){
                end += row[b];
                mp[end]++;
                e = max(e,mp[end]);
            }
        }
        
        int ans = wall.size() - e;
        return ans;
    }
};