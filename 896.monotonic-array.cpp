class Solution {
public:
    bool isMonotonic(vector<int>& array) {
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        int cnt1=0,cnt2=0;
        if(array.size() <= 2) return true;

        for(int i=0;i<array.size()-1;i++){
            if(array[i]<=array[i+1]) {
                cnt1++;
            }
            if(array[i]>=array[i+1]) {
                cnt2++;
            }

        }
        if(cnt1 == array.size()-1 || cnt2 == array.size()-1)
            return true;

        return false;
    }
};