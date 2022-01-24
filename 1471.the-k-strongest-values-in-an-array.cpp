class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        int  n = arr.size();
        sort(arr.begin(),arr.end());
        int med = (n-1)/2;
        int Median = arr[med];
        vector<pair<int,int>> p;
        for(auto i:arr)
        {
            p.push_back({abs(i-Median),i});
        }
        sort(p.rbegin(),p.rend());
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(p[i].second);
        }
        return ans; 
    }
};