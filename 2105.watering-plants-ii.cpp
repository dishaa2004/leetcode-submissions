class Solution {
public:
    int minimumRefill(vector<int>& plants, int ca, int cb) {
        int n = plants.size();
        int i = 0;
        int j = n-1;
        int ans = 0;
        int a = ca, b = cb;
        while(i <= j){
            if(i == j){
                if(max(a,b) < plants[i]){
                    ans++;
                }
                break;
            }else{
                
                if(a < plants[i]){
                    a = ca;
                    ans++;
                }
                
                if(b < plants[j]){
                    b = cb;
                    ans++;
                }
                
                a -= plants[i];
                b -= plants[j];
                
                i++;
                j--;
            }
        }
        return ans;
    }
};