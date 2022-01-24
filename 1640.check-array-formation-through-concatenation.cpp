class Solution {
public:
    vector<vector<int>> subarr;
    void help(vector<int> arr, int start, int end)
    {      
        if (end == arr.size())
            return;
        else if (start > end)
            help(arr, 0, end + 1);
        else
        {
            vector<int> k;
            for (int i = start; i <= end; i++){
                k.push_back(arr[i]);
            }
            subarr.push_back(k);
            
            help(arr, start + 1, end);
        }
        return;
    }
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {

        help(arr,0,0);
        map<vector<int>,int> mp;
        for(auto &k : subarr){
            mp[k]++;
        }
        
        int cnt = 0;
        int sz = arr.size();
        for(auto &k : pieces){
            if(mp.find(k) != mp.end()){
                cnt += k.size();
            }
            if(cnt == sz) return true;
        }
        return cnt == sz;
    }
};