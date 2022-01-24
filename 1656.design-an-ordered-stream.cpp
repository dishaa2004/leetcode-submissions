class OrderedStream {
public:
    vector<string> vp;
    int idx;
    OrderedStream(int n) {
        vp.assign(n+1,"-1");
        idx = 1;
    }
    
    vector<string> insert(int idKey, string value) {
        vp[idKey] = value;
        vector<string> ans;
        while(idx < vp.size() && vp[idx] != "-1"){
            ans.push_back(vp[idx]);
            idx++;
        }
       
        return ans;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */