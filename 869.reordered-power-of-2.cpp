class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string here = to_string(n);
        sort(here.begin(),here.end());
        vector<string> t2;
        for(int i=0;i<=30;i++){
            long long int cur = (1ll<<i);
            string c = to_string(cur);
            sort(c.begin(),c.end());
            if(here == c){
                return 1;
            }
        }
        return 0;
    }
};