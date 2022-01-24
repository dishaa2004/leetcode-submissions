class Solution {
public:
    vector<int> circularPermutation(int n, int start) {
        vector<int> ans;
        int pos = 0;
        for(int i=0;i<(1<<n);i++){
            ans.push_back((i^(i>>1)));
            if((i^(i>>1)) == start) pos = i;
        }
        
        vector<int> x(ans.begin(),ans.begin()+pos);
        vector<int> y(ans.begin()+pos,ans.end());
        
        y.insert( y.end(), x.begin(), x.end() );
        
        cout << pos << endl;
        
        return y;
    }
};