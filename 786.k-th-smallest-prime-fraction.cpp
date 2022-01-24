class Solution {
public:
    
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pair<float,pair<int,int>>,vector< pair<float,pair<int,int>> >, greater <pair<float,pair<int,int>> > > pq;
        
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                // cout << arr[i] << " " << arr[j] << endl;
                float cur = 1.0*arr[i]/arr[j];
                int x = arr[i];
                int y = arr[j];
                pq.push({cur,{x,y}});
            }
        }
        
        k--;
        while(pq.size() && k > 0){
            pq.pop();
            k--;
        }
        
        return {pq.top().second.first,pq.top().second.second};
        // return {};
    }
};