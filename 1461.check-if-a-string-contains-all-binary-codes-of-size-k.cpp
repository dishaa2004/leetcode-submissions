class Solution {
public:
    bool hasAllCodes(string s, int k) {
        set<long long int> st;
        int n = s.size();
        for(int i=0;i<n;i++){
            string cur;
            for(int j=i;j<min(n,i+k);j++){
                cur.push_back(s[j]);
            }
            // cout << cur << ",";
            if(cur.size() == k){
                long long int a = 0;
                for(int i1=0;i1<k;i1++){
                    if(cur[i1] == '1'){
                        a += (1 << i1);
                    }
                }
                st.insert(a);
            }
        }
        
        long long int pw = (1ll << k);
        
        for(long long int i = 0; i < pw; i++){
            if(st.find(i)  == st.end()){
                cout << i << endl; 
                return 0;
            }
        }
        
        
        return 1;
    }
};