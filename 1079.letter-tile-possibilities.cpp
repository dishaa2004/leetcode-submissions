class Solution {
public:
    int numTilePossibilities(string T) {
        set<string> st;
        int n = T.size();
        for(int i=0;i<(1<<n);i++){
            string cur = "";
            for(int j=0;j<T.size();j++){
                if(i&(1<<j)) cur.push_back(T[j]);
            }
            
            if(cur.size() == 0) continue;
            sort(cur.begin(),cur.end());
            do{
                st.insert(cur);
            }while(next_permutation(cur.begin(),cur.end()));
        }
        return st.size();
    }
};