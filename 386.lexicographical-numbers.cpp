class Solution {
public:
    static bool my_compare(string a, string b)
    {
        if (a.compare(0, b.size(), b) == 0
            || b.compare(0, a.size(), a) == 0)

            return a.size() < b.size();
        else
            return a < b;
    }
    vector<int> lexicalOrder(int n) {
        vector<string> ans;
        for(int i=0;i<n;i++){
            int el = i+1;
            string a = to_string(el);
ans.push_back(a);}
        sort(ans.begin(),ans.end(),my_compare);
        vector<int> realans;
        for(int i=0;i<n;i++){
        realans.push_back(stoi(ans[i]));}
        
        return realans;
    }
};