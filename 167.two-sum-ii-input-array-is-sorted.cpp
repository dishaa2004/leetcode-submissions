class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int data) {
        
        // for(int i=0;i<numbers.size()/2+1;i++){
        //     int comp = target - numbers[i];
        //     int res = upper_bound(numbers.begin(),numbers.end(),comp)-numbers.begin();
        //     if(numbers[res-1] == comp){
        //         return {i+1,res};
        //     }
        // }
        int l=0;int r = numbers.size()-1;
        while(l<r){
            if(numbers[l] + numbers[r] < data){
                 l++;
            }else if(numbers[l] + numbers[r] > data){
                r--;
            }else{
                return {l+1,r+1};
            }
        }
        return {};
        
    }
};