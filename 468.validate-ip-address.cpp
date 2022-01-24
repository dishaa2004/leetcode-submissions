class Solution {
public:
    bool checkIPv4Parts(vector<int> &arr){
        for(auto &k : arr){
            cout << k << " ";
            if(k < 0 || k > 255) return 0;
        }
        return 1;
    }
    bool IPv4(string s){
        if(s.size() > 15 || s.size() < 7){
            return 0;
        }
        vector<int> parts;
        string part;
        for(int i=0;i<s.size();i++){
            if(s[i] == '.'){
                if(part.size())
                parts.push_back(stoi(part));
                if(part.size() != to_string(parts.back()).size()){
                    return 0;
                }
                part = "";
            }else{
                if(s[i] >= '0' && s[i] <= '9')
                    part.push_back(s[i]);
                else
                    return 0;
            }
        }
        if(part.size())
        parts.push_back(stoi(part));
        if(part.size() != to_string(parts.back()).size()){
            return 0;
        }
        return parts.size() == 4 && checkIPv4Parts(parts);
    }
    
    bool checkIPv6Parts(vector<string> &arr){
        for(auto &k : arr){
            cout << k << " ";
            if(k.size() < 1 || k.size() > 4) return 0;
            for(auto &ch : k){
                if(ch >= '0' && ch <= '9'){
                    
                }else if(ch >= 'a' && ch <= 'f'){
                    
                }else if(ch >= 'A' && ch <= 'F'){
                    
                }else{
                    return 0;
                }
            }
        }
        return 1;
    }
    
    bool IPv6(string s){
        if(s.size() > 39 || s.size() < 15){
            return 0;
        }
        vector<string> parts;
        string part;
        for(int i=0;i<s.size();i++){
            if(s[i] == ':'){
                if(part.size())
                parts.push_back(part);
                part = "";
            }else{
                
                if(s[i] != ' ')
                part.push_back(s[i]);
            }
        }
        if(part.size())
        parts.push_back(part);
        return parts.size() == 8 && checkIPv6Parts(parts);
    }
    
    string validIPAddress(string Q) {
        int ipv4 = 0, ipv6 = 0;
        for(auto &k : Q){
            if(k == '.') ipv4++;
            if(k == ':') ipv6++;
        }
        
        if(ipv4 && ipv6){
            return "Neither";
        }else if(ipv4){
            cout << Q << endl;
            if(ipv4 == 3 && IPv4(Q)){
                return "IPv4";
            }else{
                return "Neither";
            }
        }else{
            if(ipv6 == 7 && IPv6(Q)){
                return "IPv6";
            }else{
                return "Neither";
            }
        }
        return "Neither";
    }
};