class Solution {
    string decodeStringRec(string &s , int &i) {
      string ans ;
      while(i < s.size() and s[i] != ']'){
          if(isdigit(s[i])){
              int k = 0 ;
              while(i < s.size() and isdigit(s[i])) k = k*10 + s[i++] - '0' ;

              i++ ;
              string r = decodeStringRec(s ,i) ;
              while(k--) ans += r ;
              i++ ;
          }else ans += s[i++] ;
      }
      return ans ;  
    }
public:
    string decodeString(string s) {
        int i = 0 ;
        return decodeStringRec(s,i) ;
    }
};
