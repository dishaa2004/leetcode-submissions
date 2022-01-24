class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> func;
        for(auto &k : words){
            char mn = 'z';
            unordered_map<char,int> mp1;
            for(auto &ch : k){
                mp1[ch]++;
                mn = min(mn,ch);
            }
            func.push_back(mp1[mn]);
        }
        
        sort(func.begin(),func.end());
        
        vector<int> ans;
        vector<int> Qfreq;
        
        for(auto &k : queries){
            char mn = 'z';
            unordered_map<char,int> mp1;
            for(auto &ch : k){
                mp1[ch]++;
                mn = min(mn,ch);
            }
            Qfreq.push_back(mp1[mn]);
        }
        int sz = func.size();
        for(auto &k : Qfreq){
            int idx = upper_bound(func.begin(),func.end(),k) - func.begin();
            if(idx == sz){
                ans.push_back(0);
            }else{
                ans.push_back(func.size() - idx);
            }
        }
        
        return ans;
    }
};