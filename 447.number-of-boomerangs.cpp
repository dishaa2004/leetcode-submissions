class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& arr) {
        int ans = 0;
        for (int i = 0; i < arr.size(); i++) {
            map<int,int> mp;
            for (int j = 0; j < arr.size(); j++) {
                if(i == j) continue;
                int dist = pow(arr[j][1] - arr[i][1], 2) + pow(arr[j][0] - arr[i][0], 2);
                if(mp[dist] > 0){
                    ans += (mp[dist]*2);
                }
                mp[dist]++;
            }
        }
        return ans;
    }
};