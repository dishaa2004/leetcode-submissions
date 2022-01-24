class Solution {
public:
    bool isPrime(int n)
    {
        if (n == 0 || n == 1)
            return false;

        for(int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    #define ll long long
    bool isThree(int n) {
        int cnt = 0;
        for (int i = 1; i*i < n; i++) {
        if (n % i == 0)
            cnt++;
        }
        for (int i = sqrt(n); i >= 1; i--) {
            if (n % i == 0)
                cnt++;
        }
        return cnt == 3;
    }
};