class Solution {
public:
    int compress(vector<char>& s) {
        if(s.size()==1){
            return 1;
        }
        string ans="";
        int cnt = 1;
        for(int i=1;i<s.size();i++)
        {
            if(s[i] != s[i-1]){
                ans.push_back(s[i-1]);
                if(cnt!=1){
                ostringstream kk;
                kk << cnt;
                string gg = kk.str();
                cout<<gg<<endl;
                ans += gg;
                }
                cnt=0;
            }
            cnt++;
        }
        ans.push_back(s[s.size()-1]);
        if(cnt!=1){
        ostringstream kk;
        kk << cnt;
        string gg = kk.str();
        cout<<gg<<endl;
        ans += gg;
        }
        vector<char> realans;
        
        for(int i=0;i<ans.size();i++){
            char ch = ans[i];
            realans.push_back(ch);
        }
        
        
        s = realans;
        return ans.size();
    }
};