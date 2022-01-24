
class Solution {
public:
  
    vector<int> constructRectangle(int area) {
         long long  half = int(double(sqrt(area)));
        while(1)
        {
            if(area % half == 0)
                break;
            half--;
        }
        vector < int > ans;
        ans.push_back(area/half);
        ans.push_back(half);
        return ans;
    }
};