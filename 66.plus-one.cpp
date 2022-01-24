class Solution {
public:
    void help(vector<int>& v,int i){
        if(i == -1){
            v.insert(v.begin(),1);
            return;
        }
        if(v[i] == 9){
            v[i] = 0;
            help(v,i-1);
        }else{
            v[i] += 1;
            return;
        }
    }
    vector<int> plusOne(vector<int>& d) {
        help(d,d.size()-1);
        return d;
    }
};