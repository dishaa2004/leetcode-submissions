class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto &x:arr){
            mp[x]++;
        }
        sort(arr.begin(),arr.end(),[](const int a,const int b){
            return abs(a) < abs(b);
        });
        
        for(auto &x:arr)
        {
            if(mp[x]==0)
                continue;
            if(mp[x]>mp[2*x])
                return false;
            mp[2*x]-=mp[x];
            mp[x]=0;
        }
        return true;
    }
};