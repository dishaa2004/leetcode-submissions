class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size()){
            return findMedianSortedArrays(nums2,nums1);
        }
        int x = nums1.size(); int y = nums2.size();
        int tot = x + y;
        int lo = 0, hi = x;
        while(lo <= hi){
            int mid = lo + (hi - lo)/2;
            int lx = (mid == 0) ? INT_MIN : nums1[mid-1]; 
            int rx = (mid == x) ? INT_MAX : nums1[mid];
            int must = (x + y + 1)/2 - mid;
            int ly = (must == 0) ? INT_MIN : nums2[must-1]; 
            int ry = (must == y) ? INT_MAX : nums2[must];
            
            if(lx <= ry && ly <= rx){
                // Found
                if(tot&1) // Odd -> middle
                    return 1.0 * max(lx,ly);
                else{
                    int a1 = max(lx,ly);
                    int b1 = min(rx,ry);
                    return 1.0*(a1+b1)/2.0;
                }
            }else if(ly > rx){
                lo = mid+1;
            }else{
                hi = mid-1;
            }
        }
        return 0.0;
    }
};