#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define sp " "
#define all(a) a.begin(),a.end()
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        sort(all(nums));
        do{
           ans.insert(nums); 
            
        }while(next_permutation(all(nums)));
        
        vector<vector<int>> realans;
        
        for(auto &k:ans){
            realans.pb(k);
        }
        return realans;
    }
};