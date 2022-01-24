class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        
        string a = "",b="";
        int i1 = 0;
        bool neg1 =0,neg2 = 0;
        for(int i=0;i<num1.length();i++){
            if(num1[i] == '-'){
                neg1 = 1;
                continue;
            }
            if(num1[i] == '+'){
                i1=i;
                break;
            }
            a.push_back(num1[i]);
        }
        
        for(int j=i1+1;j<num1.length();j++){
            if(num1[j] == '-'){
                neg2 = 1;
                continue;
            }
            b.push_back(num1[j]);
        }
        
        stringstream gg1(a);
        stringstream gg2(b);
        int a1 = 0;
        int b1 = 0;
        gg1>>a1;
        gg2>>b1;
        a="",b="";
        
        if(neg1){
            a1 = -1*a1;
        }
        if(neg2){
            b1 = -1*b1;
        }
        neg1 =0,neg2 = 0,i1=0;
        for(int i=0;i<num2.length();i++){
            if(num2[i] == '-'){
                neg1 = 1;
                continue;
            }
            if(num2[i] == '+'){
                i1=i;
                break;
            }
            a.push_back(num2[i]);
        }
        
        for(int j=i1+1;j<num2.length();j++){
            if(num2[j] == '-'){
                neg2 = 1;
                continue;
            }
            b.push_back(num2[j]);
        }
        stringstream ggg1(a);
        stringstream ggg2(b);
        int a2 = 0;
        int b2 = 0;
        ggg1>>a2;
        ggg2>>b2;
        if(neg1){
            a2 = -1*a2;
        }
        if(neg2){
            b2 = -1*b2;
        }
        
        
        // (a1+ib1)*(a2+ib2) =  a1a2 + (a1b2 + a2b1) i - b1b2
        
        int real = a1*a2 - b1*b2;
        string ans1 = to_string(real);
        int complex = (a1*b2 + a2*b1);
        string ans2 = to_string(complex);
        ans2.push_back('i');
        ans1.push_back('+');
        cout<<a1<<" "<<b1<<" "<<a2<<" "<<b2<<endl;
        return (ans1+ans2);
    }
};