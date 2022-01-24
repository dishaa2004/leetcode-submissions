class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int> mp;
        for(auto &k : nums) mp[k]++;

        int ans = 0;
        
        for(auto it = mp.begin(); it != (--mp.end()); it){
            auto a = it;
            auto b = ++it;
            cout << a->first << " " << b->first << endl;
            if(abs(a->first - b->first) == 1)
                ans = max(ans, a->second + b->second);
        }
        
        return ans;
    }
};