class Solution {
public:
    long long int parse(string ss){
        bool neg = false;
        bool pos = false;
        long long int ans = 0;
        int i = 0;
        for(auto &k : ss){
            cout << k << ",";
            if(k == '-'){
                if(i != 0) return 1e17;
                if(pos) return 1e17;
                neg = 1;
            } 
            else if(k == '+'){
                if(i != 0) return 1e17;
                if(neg) return 1e17;
                pos = 1;
            } 
            else if(k == '.') {
                break;
            }
            else if(k >= '0' && k <= '9'){
                int p = k - '0';
                ans*=10ll;
                ans += p;
            }else{
                break;
            }
            i++;
        }
        if(neg) return -ans;
        
        return ans;
    }
    int myAtoi(string s) {
        stringstream ans(s);
        int x = 0;
        ans >> x;
        return x;
    }
};