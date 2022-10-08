#include<bits/stdc++.h>
using namespace std;

#define ll long long


void solve(){
   int n,q;
   cin >> n >>q;
   vector<int> rows(n+1,0),cols(n+1,0);
   set<int> freeRows,freeCols;

   for(int i=1;i<=n;i++){
      freeRows.insert(i);
      freeCols.insert(i);
   }
   
   while(q--){
      int t;
      cin >> t;

      if(t==1){
         int x,y;
         cin >> x >> y;

         rows[x]++;
         cols[y]++;
         if(rows[x] == 1) freeRows.erase(x);
         if(cols[y] == 1) freeCols.erase(y);
      }

      else if(t==2){
         int x,y;
         cin >> x >> y;

         rows[x]--;
         cols[y]--;
         if(rows[x] == 0) freeRows.insert(x);
         if(cols[y] == 0) freeCols.insert(y);
      }

      else{
         int a,b,c,d;
         cin >> a >> b >> c >> d;

         int x = *freeRows.upper_bound(a-1);
         int y = *freeCols.upper_bound(b-1);


         if(x>c || y>d){
            cout << "YES" << endl;
         }
         else{
            cout << "NO" << endl;
         }
      }
   }
}

int main()
{
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif

   int t=1;
   // cin>>t;


   while(t--)
   {
      solve();
   }
   
   cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
   return 0;
}
