#define all(a) (a).begin(), (a).end()
#define mine(a) *min_element(all(a))
#define maxe(a) *max_element(all(a))
#define sum(a) accumulate(a.begin(),a.end(),0ll)
class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long long int mx1 = 0, mn1 = 0;
        long long int c = 0;
        for(auto &k : differences){
            c += k;
            mx1 = max(mx1,c);
            mn1 = min(mn1,c);
        }
        long long int a1 = (upper-lower)-(mx1-mn1)+1;
        long long int a2 = 0;
        return max(a1,a2);
    }
};