class Solution {
public:
    bool isPrime(int n)
    {
        // Corner cases
        if (n <= 1)  return false;
        if (n <= 3)  return true;

        // This is checked so that we can skip
        // middle five numbers in below loop
        if (n%2 == 0 || n%3 == 0) return false;

        for (int i=5; i*i<=n; i=i+6)
            if (n%i == 0 || n%(i+2) == 0)
               return false;

        return true;
    }
    int countSetBits(int N)
    {
        int count = 0;

        // (1 << i) = pow(2, i)
        for (int i = 0; i < sizeof(int) * 8; i++) {
            if (N & (1 << i))
                count++;
        }
        return count;
    }
    int countPrimeSetBits(int left, int right) {
        int cnt = 0;
        for(int i=left;i<=right;i++)
        {
            int c = countSetBits(i);
            if(isPrime(c))
                cnt++;
        }
        return cnt;
    }
};