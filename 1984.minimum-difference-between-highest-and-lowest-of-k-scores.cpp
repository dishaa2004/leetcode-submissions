class Solution {
public:
    int minimumDifference(vector<int>& a, int k) {
        if(k<=1){
            return 0;
        }
        sort(a.begin(),a.end());
        // reverse(nums.begin(),nums.end());
        int r = INT_MAX;
        for (int i=0; i<=a.size()-k; i++)
            r = min(r, a[i+k-1] - a[i]);
 
        return r;
    }
};