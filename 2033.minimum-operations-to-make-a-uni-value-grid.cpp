class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> a;int m;
        
        if(grid[0][0] < 0){
            m = x - (abs(grid[0][0])%x);
        }else{
            m = grid[0][0]%x;
        }
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                a.push_back(grid[i][j]);
                if(grid[i][j] < 0){
                    int m1 = x - (abs(grid[i][j])%x);
                    if(m != m1) return -1;
                }else{
                    int m2 = grid[i][j];
                    if(m2%x != m) return -1;
                }
            }
        }
        sort(a.begin(),a.end());
        int median = a[(grid.size() * grid[0].size()) / 2],ans = 0;
        for (int i = 0; i < grid.size() * grid[0].size(); ++i)
            ans += abs(a[i] - median) / x;
        if ((grid.size() * grid[0].size()) % 2 == 0) {
            int median2 = a[((grid.size() * grid[0].size()) / 2) - 1];
            int a2 = 0;
            for (int i = 0; i < grid.size() * grid[0].size(); ++i)
                a2 += abs(a[i] - median2) / x;
            ans = min(ans, a2);
        }

        return ans;
    }
};