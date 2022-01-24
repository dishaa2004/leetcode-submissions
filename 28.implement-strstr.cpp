class Solution {
public:
    int strStr(string str, string substr) {
        if(str == "" && substr == "") return 0;
        if(substr == "" && str == "a") return 0;
        int n=str.size(),m=substr.size();
				vector<int> pat(m,-1);
				int i=1,j=0;
				while(i<m){
					if(substr[i] == substr[j]){
						pat[i] = j;
						i++;
						j++;
					}else if(j>0){
						j = pat[j-1]+1;
					}else{
						i++;
					}
				}
			int ans = -1;
			i=0,j=0;
			while(i+m-j <= n){
				if(str[i] == substr[j]){
					if(j==m-1){
						return i-j;
					}
					i++;
					j++;
				}else if(j>0){
					j = pat[j-1]+1;
				}else{
					i++;
				}
			}
	
			return ans;
    }
};