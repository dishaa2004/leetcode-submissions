#define ll long long int
class Solution {
public:
    // Change constrains according to problem
    
    bool prime[5000010];

    void sieve(int n){
        prime[2] = 1;
        for(ll i = 3; i <= n; i += 2){
            prime[i] = 1;
        }

        for(ll i=3;i<= n;i++){
            if(prime[i]){
                for(ll j = i * i; j <= n; j += i){
                    prime[j] = 0;
                }
            }
        }
    }

    int countPrimes(int n) {
        if(n == 0) return 0;
        if(n == 1) return 0;
        if(n == 2) return 0;
        if(n == 3) return 1;
        if(n == 4) return 2;
        ios_base::sync_with_stdio(false), cin.tie(nullptr);
        sieve(n);
        int ans = 0;
        for(int i=2;i<n;i++){
            if(prime[i]) ans++;
        }
        return ans;
    }
};