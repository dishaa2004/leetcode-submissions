class Solution {
public:
    string smallestNumber(string s) {
        int n=s.size();
        vector<int> v;
        for(int i=1;i<=n+1;i++){
            v.push_back(i);
            
        }
        vector<int> v1=v;
        do{
            int f=0;
            // for(auto y:v){
            //     cout<<y<<" ";
            // }
            // cout<<endl;
            for(int i=0;i<n;i++){
                char x=s[i];
                if(x=='I' && v[i]>v[i+1]){
                    f=1;
                    // cout<<v[i]<<" "<<v[i+1]<<endl;
                    // cout<<i<<endl;
                    break;
                   
                    
                }
                else if(x=='D'){
                    if(v[i]<v[i+1]){
                        f=1;
                        break;
                    }
                }
            }
            //cout<<f<<endl;
            if(f==0){
                v1=v;
                break;
            }
            
        }while(next_permutation(v.begin(),v.end()));
        
        string ans="";
        for(int x:v1){
            ans+=to_string(x);
        }
        return ans;
        
    }
};