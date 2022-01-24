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
    int uniqueMorseRepresentations(vector<string>& words) {
         string S[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
         set<string> s;
         int n  = words.size();
         for(int i=0;i<n;i++)
         {
             string ans="";
             for(int j=0;j<words[i].length();j++)
             {
                 ans+= S[words[i][j]-'a'];
             }
             s.insert(ans);
         }
         int size = s.size();
         return size;
    }
};