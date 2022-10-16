class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.size() ;
        int flag = 1 ;
        if(n == 0 || n == 1) return "" ;
        n = n/2-1 ;

        for(int i = 0 ; i <= n ; i++){
            if(palindrome[i] != 'a'){
                palindrome[i] = 'a' ;
                flag = 0 ;
                break ;
            }
        }

        if(flag){
            palindrome[palindrome.size()-1] = 'b' ;
        }

        return palindrome ;
    }
};
