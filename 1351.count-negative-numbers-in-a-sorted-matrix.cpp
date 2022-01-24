class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        for(int i=0;i<grid.size();i++){
            int cur = grid[i].size();
            cur--;
            while(cur >= 0){
                if(grid[i][cur] < 0){
                    ans++;
                }else{
                    break;
                }
                cur--;
            }
        }
        return ans;
    }
};