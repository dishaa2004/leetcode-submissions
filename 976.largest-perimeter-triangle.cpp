// #pragma GCC target ("avx2")
// #pragma GCC optimization ("O3")
// #pragma GCC optimization ("unroll-loops")
#define fastread()  ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        fastread();
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-2;i++)
        {
            int a = nums[i];
            int b = nums[i+1];
            int c = nums[i+2];
            if(a+b>c && b+c>a && a+c>b) return (a+b+c);
        }
        return 0;
    }
};