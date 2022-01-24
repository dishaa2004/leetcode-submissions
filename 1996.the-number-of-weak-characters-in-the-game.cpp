class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& prop) {
        sort(prop.begin(),prop.end(),[](const auto &a,const auto &b){
            if(a[0] == b[0]) return a[1] > b[1];
            
            return a[0] < b[0];
        });
            
        int n =  prop.size();
        int ans = 0;
        int mx = INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(prop[i][1] < mx) ans++;
            
            mx = max(mx,prop[i][1]);
        }
        
        return ans;
    }
};