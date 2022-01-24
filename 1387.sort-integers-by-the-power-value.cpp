class Solution {
public:
    int steps(int x){
        int s = 0;
        while(x != 1){
            if(x&1){
                x = 3*x + 1;
            }else {
                x = x/2;
            }
            s++;
        }
        return s;
    }

    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>> v;
        for(int i=lo;i<=hi;i++){
            int x=steps(i);
            v.push_back({i,x});
        }
        sort(v.begin(),v.end(),[](const pair<int,int> &a,const pair<int,int> &b){
            if(a.second != b.second)
            return (a.second < b.second);
            
            return (a.first < b.first);
        });
        // for(auto &k1 : v){
        //     cout<<k1.first<<" "<<k1.second<<"\n";
        // }
        return v[k-1].first;
    }
};