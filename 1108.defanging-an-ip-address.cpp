class Solution {
public:
    string defangIPaddr(string address) {
        string v;
        int n = address.size();
        for(int i=0;i<n;i++)
        {
            if(address[i] == '.')
            {
                v.push_back('[');
                v.push_back('.');
                v.push_back(']');
            }
            else
            {
                v.push_back(address[i]);
            }
        }
        return v;
    }
};