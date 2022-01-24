class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string,int> mp;
        
        for(auto &k : cpdomains){
            string intpart = "";
            int idx = 0;
            for(auto &p : k){
                if(p == ' ') break;
                intpart.push_back(p);
                idx++;
            }
            string rest = k.substr(idx+1,k.size());
            reverse(rest.begin(),rest.end());
            string cur = "";
            int cpd = stoi(intpart);
            for(auto &kk : rest){
                if(kk == '.' && cur.size()){
                    mp[cur] += cpd;
                }
                cur.push_back(kk);
            }
            mp[cur] += cpd;
        }
        vector<string> ans;
        for(auto &k : mp){
            string cur = to_string(k.second) + " " + string(k.first.rbegin(),k.first.rend());
            ans.push_back(cur);
        }
        return ans;
    }
};