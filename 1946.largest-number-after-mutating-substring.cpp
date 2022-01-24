class Solution {
public:
    string maximumNumber(string s, vector<int>& arr) {
        int n = s.size();
       for (int i = 0; i < n; i++) {
           int c = s[i] - '0';
          if ( c < arr[c]) {
             int j = i;
             while (j < n && (s[j] - '0' <= arr[s[j] - '0'])) {
                s[j] = '0' + arr[s[j] - '0'];
                j++;
             }
             return s;
          }
       }
       return s;
    }
};