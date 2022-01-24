class Solution {
public:
    
    bool ok(int mid, vector<int>& piles, int h){
        int d = 0;
        for(auto &k : piles){
            d += ceil(1.0*k/mid);
        }
        if(d <= h) return 1;
        return 0;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        // sort(piles.begin(),piles.end());
        int lo = 1;
        int hi = 1e9;
        
        int ans = 1e9;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(ok(mid,piles,h)){
                ans = min(ans,mid);
                hi = mid-1;
            }else{
                lo = mid+1;
            }
        }
        return ans;
    }
};