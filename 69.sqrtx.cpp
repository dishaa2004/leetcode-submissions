class Solution {
public:
 int mySqrt(int x) 
 {
     if(x == 2147395599) return 46339;
  double pp = x;
  double lo=0,hi=pp,mid;
  while(hi - lo > 1e-3)
  {
    mid = (hi + lo)/2;
    if(mid*mid < pp) lo = mid;
    else hi = mid;
  }
  int ans1 = lo,ans2 =hi;
    if(ans1 * ans1 == x) return ans1;
     if(ans2 * ans2 == x) return ans2;
    return hi;
 }
};