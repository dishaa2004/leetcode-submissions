class Solution {
public:
    string capitalizeTitle(string s) {
        istringstream iss(s);
        string ans = "";
        do
        {
            string subs;
            iss >> subs;
            for(int i=0;i<subs.size();i++){
                if(i == 0 && subs.size() > 2){
                    ans.push_back(toupper(subs[i]));
                }else{
                    ans.push_back(tolower(subs[i]));
                }
            }
            ans += " ";
        } while (iss);
        while(ans.back() == ' ') ans.pop_back();
        return ans;
    }
};