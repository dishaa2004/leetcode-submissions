#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define INF 1000000000000000003
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define endl "\n"
#define pb push_back
#define mkpr make_pair
using namespace std;
const int  N = 1e6+10;
long long int a[N], b[N];
#define debug1(x) "x = "<<x<<"\n"
#define debug2(x,y) "x = "<<x<<" y = "<<y<<"\n"
#define debug3(x,y,z) "x = "<<x<<" y = "<<y<<" z = "<<z<<"\n"

class Solution {
public:
    int cnt1=0;
    int cnt2=0;
    int res1=0;
    int res2=0;
    bool checkZeroOnes(string s) {
        for(int i=0;i<s.length();i++)
        {
          if(s[i]=='0')
              cnt1=0;
          else
          {
            cnt1++;
            res1 = max(res1,cnt1);
          }
        }
        for(int i=0;i<s.length();i++)
        {
          if(s[i]=='1')
              cnt2=0;
          else
          {
            cnt2++;
            res2 = max(res2,cnt2);
          }
        }
        // debug2(cnt1,cnt2);
        if(res1>res2)
          return 1;
        else
          return 0;
    }

};
