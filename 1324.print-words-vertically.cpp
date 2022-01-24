class Solution {
public:
    vector<string> printVertically(string s) {
        vector<string> words;
        istringstream iss(s);
        
        int mx = 0;
        while(iss){
            string cur;
            iss >> cur;
            mx = max(mx,(int)cur.size());
            if(cur.size())
            words.push_back(cur);
        }
        for(auto &k : words){
            while(k.size() < mx) k += " ";
            cout << k << ",";
        }
        vector<string> ans;
        for(int i=0;i<mx;i++){
            string cur1;
            for(int j=0;j<words.size();j++){
                cur1.push_back(words[j][i]);
            }
            while(cur1.size() && cur1.back() == ' ') cur1.pop_back();
            cout << cur1 << " : ";
            if(cur1.size() >= 1){
                ans.push_back(cur1);
            }
        }
        return ans;
    }
};