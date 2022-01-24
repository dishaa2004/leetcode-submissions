#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define sp " "
#define all(a) a.begin(),a.end()
class Solution {
public:
    set<vector<int>> ans;
    map<int,int> mp;
    void help(vector<int> &a,vector<int> &cur){
        if(cur.size()==a.size()){
            ans.insert(cur);
            return;
        }
        for(auto &k : a){
            if(mp[k]) continue;
            cur.push_back(k);
            mp[k]++;
            help(a,cur);
            mp[k]--;
            cur.pop_back();
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size() == 1){
            return {{nums[0]}};
        }
        if(nums.size() == 2){
            return {{nums[0],nums[1]},{nums[1],nums[0]}};
        }
        ans.clear();
        vector<vector<int>> aa;
        vector<int> cur;
        help(nums,cur);
        for(auto &k : ans) aa.push_back(k);
        return aa;
    }
};