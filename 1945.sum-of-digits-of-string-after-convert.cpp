class Solution {
public:
    int getSum(int n)
    {
        int sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }
    int getLucky(string s, int k) {
        
        int ans = 0;
        for(int i=0;i<s.length();i++){
            int sum = s[i] - 'a' + 1;
            while(sum != 0){
                ans = ans + sum%10;
                sum /=10;
            }
        }
        
        k--;
        
        while(k--){
            // cout<<x<<" ";
            ans = (getSum(ans));
        }
        return ans;
    }
};