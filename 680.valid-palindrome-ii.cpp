class Solution {
public:
     bool check(string s, int i, int j){
        while(i < j){
            if(s[i++] != s[j--])
                return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int lo=0,hi=s.length()-1,cnt=0;
        while(lo < hi){
            if(s[lo] != s[hi]){
                return check(s,lo,hi-1) || check(s,lo+1,hi);
            }else {
                lo++;
                hi--;
            }
        }
        
        return 1;
    }
};