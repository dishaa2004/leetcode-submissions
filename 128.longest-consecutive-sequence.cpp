class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> mp;
        for(auto &k : nums){
            mp[k] = 1;
        }
        
        int a = 0;
        

        for(auto &k : mp){
            if(k.second >= 1){
                mp[k.first] = mp[k.first-1]+1;
                a = max(a,mp[k.first]);
            }
        }
        return a;
    }
};