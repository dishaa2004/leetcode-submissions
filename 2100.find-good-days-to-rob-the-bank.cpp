#define ll long long 
#define nl cout << "\n"
#define pb push_back
// #define vector<int> vi 
// #define vector<vector<int>> vvi 
#define all(a) a.begin(),a.end()

class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& A, int time) {
        vector<int> A1,l,r;
        int p = -1;
        for(auto &k : A){
            if(p >= k){
                A1.push_back(k);
            }else{
                A1 = {k};
            }
            
            if(A1.size() > time){
                l.push_back(1);
            }else{
                l.push_back(0);
            }
            p = k;
        }
        reverse(A.begin(),A.end());
        A1.clear();
        p = -1;
        for(auto &k : A){
            if(p >= k){
                A1.push_back(k);
            }else{
                A1 = {k};
            }
            
            if(A1.size() > time){
                r.push_back(1);
            }else{
                r.push_back(0);
            }
            p = k;
        }
        reverse(r.begin(),r.end());
        vector<int> ans;
        for(int i=0;i<A.size();i++){
            if(l[i]&r[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};