class Solution {
public:
    vector<int> decode(vector<int>& ee, int first) {
        int f =first;vector<int> ans;
        ans.push_back(f);
        for(int i=0;i<ee.size();i++){
            f = f^ee[i];
            ans.push_back(f);
        }
        return ans;
    }
};