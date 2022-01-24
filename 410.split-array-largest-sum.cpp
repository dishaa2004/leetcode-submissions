class Solution {
public:
    bool ok(vector<int> &nums, int mid, int m){
        int seg = 1;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > mid){
                return 0;
            }
            sum += nums[i];
            if(sum > mid){
                seg++;
                sum = nums[i];
            }
        }
        return seg <= m;
    }
    int splitArray(vector<int>& nums, int m) {
        int n = nums.size();
        // sort(nums.begin(),nums.end());
        int l = *max_element(nums.begin(),nums.end()), r = accumulate(nums.begin(),nums.end(),0);
        int ans = r;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(ok(nums,mid,m)){
                ans = mid;
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        return ans;
    }
};