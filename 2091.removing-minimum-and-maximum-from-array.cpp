class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mn = *min_element(nums.begin(),nums.end());
        int mni = min_element(nums.begin(),nums.end()) - nums.begin();
        int mx = *max_element(nums.begin(),nums.end());
        int mxi = max_element(nums.begin(),nums.end()) - nums.begin();
        
        int f = max(mni,mxi)+1;
        int b = n - min(mni,mxi);
        int fb = min(mni,mxi) + 1 + (n - max(mni,mxi));
        cout << f << "," << b << "," << fb << endl;
        return min({f,b,fb});
    }
};