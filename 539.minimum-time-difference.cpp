class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> s;
        for(auto &k : timePoints){
            int a = stoi(k.substr(0,2));
            int b = stoi(k.substr(3,6));
            // cout << a << " " << b << endl;
            s.push_back(a*60+b);
        }
        sort(s.begin(),s.end());
        int mx = (24*60 + s[0] - s[s.size()-1]);
        for(int i=1;i<s.size();i++){
            mx = min(mx, s[i] - s[i-1]);
        }
        return mx;
    }
};