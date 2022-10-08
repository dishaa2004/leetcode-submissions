#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    string ans = "";
    int i = n-1;

    while(i >= 0){
        if(s[i] == '0'){
            string curr = "";
            curr += s[i-2];
            curr += s[i-1];

            ans += char('a' + (stoi(curr) - 1));
            i -= 3;
        }
        else{
            ans += char('a' + ((s[i]) - '1'));
            i--;
        } 
    }

    reverse(ans.begin(), ans.end());

    cout << ans << endl;
}

int main(){
// #ifndef MYNK
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
