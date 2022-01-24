#define pb insert
class Solution {
public:
    set<int> fact;
    void factors(int n){
     for(int i=1;i*i<=n;i++){
     if(n%i == 0){

      if(n/i == i)
       fact.pb(i);
     else{
       fact.pb(n/i);
       fact.pb(i);
     }
   }

  }
  }
    int kthFactor(int n, int k) {
        fact.clear();
        factors(n);
        // for(auto &p : fact) cout<<p<<endl;
        if(k>=fact.size()+1) return -1;
        int ans;
        int k1=0;
        for(auto &p : fact){
            k1++;
            if(k1 == k)
            {
                ans = p;
                break;
            }
        }
        return ans;
    }
};