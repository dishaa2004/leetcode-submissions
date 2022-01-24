class Solution {
public:
    string addStrings(string num1, string num2) {
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        if(num1.size() < num2.size()){
            while(num1.size() != num2.size()){
                num1.push_back('0');
            }
        }else{
            while(num1.size() != num2.size()){
                num2.push_back('0');
            }
        }
        
        int sz = num1.size();
        
        string ans;
        int carry = 0;
        for(int i=0;i<sz;i++){
            int cur = (num1[i]-'0') + (num2[i]-'0');
            if(carry){
                int p = cur + carry;
                ans.push_back('0'+(p)%10);
                if(p>=10){
                    carry = p/10;
                }else{
                    carry = 0;
                }
            }else{
                int p = cur;
                ans.push_back('0'+(p)%10);
                if(p>=10){
                    carry = p/10;
                }else{
                    carry = 0;
                }
            }
            
        }
        
        if(carry){
            ans.push_back(carry+'0');
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};