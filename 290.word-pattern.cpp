class Solution {
public:
    bool wordPattern(string p, string s) {
        map<char,vector<string>> mp;
        map<string,int> mp1;
        istringstream f(s);
        int j = 0, str = 0;
        do {
            string x;
            f >> x;
            if(x.size()){
                str++;
                mp1[x]++;
                if(mp[p[j]].size() == 0){
                    mp[p[j]].push_back(x);
                    j++;
                }else{
                    string prev = mp[p[j]][0];
                    cout << prev << "," << x << endl;
                    if(prev != x) return false;
                    j++;
                }
            }

        }while(f);
        if(p.size() != str) return false;
        return mp.size() == mp1.size();
    }
};