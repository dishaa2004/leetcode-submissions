#define ll long long
#define all(a) a.begin(),a.end()
#define mine(a) *min_element(all(a))
#define maxe(a) *max_element(all(a))
#define sum(a) accumulate(all(a),0ll)
#define pb push_back

class Solution {
public:
    string largestOddNumber(string num) {
        string k = num;
        ll n = num.size();
        if(n==1)
        {
            if((num[0]-'0') %2 == 0)
            {
                return "";
            }
            else
            {
                return num;
            }
        }
        int pos = -1;
        for(int i=n-1;i>=0;i--)
        {
            ll ch = k[i]-'0';
            if(ch&1)
            {
                pos = i;
                break;
            }
        }
        string ans="";
        if(pos == -1)
        {
            return "";
        }
        for(int i=0;i<=pos;i++)
        {
            ans.pb(k[i]);
        }
        return ans;
    }
};
