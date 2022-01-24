class Solution {
public:
    static bool CI(pair<int,int>&a, pair<int,int>&b)
    {
        if(a.first < b.first){

            return true;
        }

        if(a.first == b.first){

            if(a.second > b.second){

                return true;
            }
        }
       return false;
    }
    vector<int> frequencySort(vector<int>& nums) {
        vector<pair<int,int>> vp;
        unordered_map<int,int> mp;
        for(auto &ch:nums){
            mp[ch]++;
        }
        
        for(auto &k : mp){
            vp.push_back({k.second,k.first});
        }
        sort(vp.begin(),vp.end(),CI);
        // reverse(vp.begin(),vp.end());
        vector<int> ans;
        for(int i=0;i<vp.size();i++){
            // cout<<vp[i].first<<" "<<vp[i].second<<"\n";

            for(int z=0;z<vp[i].first;z++){
                ans.push_back(vp[i].second);
            }

        }
        
        
        return ans;
    }
};