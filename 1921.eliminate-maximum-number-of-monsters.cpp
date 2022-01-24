#define ld long double
#define all(v) v.begin(),v.end()
class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        vector<ld> time(n);
        for(int i=0;i<n;i++){
            time[i] = (ld)dist[i]/(ld)speed[i];
        }
        sort(all(time));
        int ans = 0;
        int tt = 0;
        for(auto &k : time){
            if(k <= tt) {
                break;
            }else{tt++;
            ans++;
            }
        }
        return ans;
    }
};