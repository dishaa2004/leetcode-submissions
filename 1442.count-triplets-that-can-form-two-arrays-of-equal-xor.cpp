#define ll long long
class Solution {
public:
    int countTriplets(vector<int>& arr) {
        // Keep in mind Constraints : ***** 1 <= arr[i] <= 10^8 *****
        ll res = 0;
        for(int i=0;i<arr.size();i++){
            ll xorr = 0;
            for(int j=i;j<arr.size();j++){
                xorr ^= arr[j];
                if(xorr == 0) res += (j-i);
            }
        }
       return res; 
    }
};