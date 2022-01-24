class Solution {
public:
    #define ll long long 
    long long numberOfWeeks(vector<int>& arr) {
        ll mmm = *max_element(arr.begin(), arr.end());
        ll total = accumulate(arr.begin(), arr.end(), 0ll);
        ll ss = total - mmm;
        ll ans = 0;
        if((ss + 1) < mmm) 
            return (2 * ss) + 1;
        else 
            return total;
				
		return ans;
        
    }
};