class Solution {
public:
    bool isValid(string s){
        int i = stoi(s); // String to int conversion
        if(i < 0 || i > 255) return 0; // Invalid integer
        return (to_string(i)).size() == s.size(); // check for leading 0's
    }
    
    vector<string> restoreIpAddresses(string s) {
        int n = s.size();
        vector<string> ans;
        
        if(n > 12 || n < 4){ // Invalid lengths because n < 4 => no separation
            return ans;      // max(n) = 12 => max = 255 => len = 3 for each four    integers and min(n) = 4 i.e, len = 1 for each four integers
        }
        
        for(int i=1;i<min(n,4);i++){
            for(int j=i+1;j<min(n,i+4);j++){
                for(int k=j+1;k<min(n,j+4);k++){
                    string s1 = s.substr(0,i);
                    string s2 = s.substr(i,j-i);
                    string s3 = s.substr(j,k-j);
                    string s4 = s.substr(k,n);
                    // Check if all the parts are valid then insert into ans vector
                    if(isValid(s1) && isValid(s2) && isValid(s3) && isValid(s4)){
                        ans.push_back(s1 + "." + s2 + "." + s3 + "." + s4);
                    }
                }
            }
        }
        
        return ans;
    }
};