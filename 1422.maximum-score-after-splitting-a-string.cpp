class Solution {
public:
    int maxScore(string s) {
        vector<int> v;
        int n = s.length();
        for(int i=1;i<n;i++)
        {
            string s1 = s.substr(0,i);
            string s2 = s.substr(i,n);
            // cout<<s1<<" "<<s2<<endl;
            int c1 = count(s1.begin(),s1.end(),'0');
            int c2 = count(s2.begin(),s2.end(),'1');
            int tot = c1+c2;
            v.push_back(tot);
        }
        return *max_element(v.begin(),v.end());
    }
};