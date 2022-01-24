class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int nn, int limit) {
        vector<pair<int,int>> vp;
        int n = labels.size();
        for(int i=0;i<n;i++){
            vp.push_back({values[i],labels[i]});
        }
        
        sort(vp.begin(),vp.end(),[](const auto &a, const auto &b){
           return a.first > b.first;
        });
        
        map<int,int> mp;
        int sum = 0;
        for(int i=0;i<n;i++){
            if(nn <= 0) break;
            mp[vp[i].second]++;
            if(mp[vp[i].second] <= limit){
                sum += vp[i].first;
            }else{
                continue;
            }
            nn--;
        }
        return sum;
        
    }
};