class Solution {
public:
    int piv(vector<int> nums)
    {
        int l=0,r=nums.size()-1;
        int sz=nums.size()-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            
            if(nums[mid]<nums[sz] and nums[mid]<nums[0])
                r=mid-1;
            else
                l=mid+1;
        }
        return r;
    }
    int findMin(vector<int>& nums) {
        int pivot = piv(nums);
        
        if(pivot + 1 < nums.size())
        {
            return min(nums[pivot+1],nums[0]);
        }
        
        return min(nums[0],nums[nums.size()-1]);
        
    }
};