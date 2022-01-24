class Solution {
public:
    int VC(string a){
        int cnt = 0;
        for(int i=0;i<a.length();i++){
            if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i'|| a[i] == 'o' || a[i] == 'u'||a[i] == 'A' || a[i] == 'E' || a[i] == 'I'|| a[i] == 'O' || a[i] == 'U')
                cnt++;
            
        }
        return cnt;
    }
    bool halvesAreAlike(string s) {
        int n = s.length();
        string a = s.substr(0,n/2);
        string b = s.substr(n/2,n);
        if(VC(a) == VC(b))
            return 1;
        return 0;
    }
};