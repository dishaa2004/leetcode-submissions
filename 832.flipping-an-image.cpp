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
        vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
            vector<vector<int>> ans;
            for(int i=0;i<image.size();i++)
            {
                vector<int> v;
                for(int j=0;j<image[i].size();j++)
                {
                    v.push_back(image[i][j]);
                }
                reverse(v.begin(),v.end());
                ans.push_back(v);
            }
            for(int i=0;i<ans.size();i++)
            {
                for(int j=0;j<ans[i].size();j++)
                {
                    if(ans[i][j] == 1)
                      ans[i][j] = 0;
                    else
                      ans[i][j] = 1;
                }
            }
            return ans;
        }
};