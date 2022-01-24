#define ll long long
#define ld long double
#define pb push_back
#define mem(a,x) memset(a,x,sizeof(a))
#define deb1(a) cout<<a<<"\n";
#define deb2(a,b) cout<<a<<" "<<b<<"\n";
#define all(a) a.begin(),a.end()
#define mine(a) *min_element(a.begin(),a.end())
#define maxe(a) *max_element(a.begin(),a.end())
#define getFaster ios_base::sync_with_stdio(false), cin.tie(nullptr)
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
       getFaster;
       int n = num.size(); 
        vector<int> ans;
        int carry = 0;
        for(int i=n-1;i>=0;i--){
            ans.insert(ans.begin(),(num[i] + k%10 + carry)%10);
            carry = (num[i] + k%10 + carry)/10;
            k = k/10;
        }
        
        
        if(k!=0){
            while(k!=0){
                ans.insert(ans.begin(),(k%10+carry)%10);
                carry = (k%10+carry)/10;
                k/=10;
            }
        }
        
        if(carry){
            ans.insert(ans.begin(),carry);
        }
        return ans;
    }
};