class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        int i = 0;
        while(i<s.size()){
            string cur = "";
            for(int j=i;j<min(i+k,(int)s.size());j++){
                cur.push_back(s[j]);
            }
            while(cur.size() < k){
                cur.push_back(fill);
            }
            ans.push_back(cur);
            i += k;
        }
        return ans;
    }
};