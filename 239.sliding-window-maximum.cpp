class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& A, int B) {
    vector<int> ans;
    list<int>li;
    int i=0,j=0;
    while(j<A.size()){
        while(li.size() > 0 && li.back() < A[j]){
                li.pop_back();
            }
            li.push_back(A[j]);
            
            if(j-i+1 < B)
                j++;
            else if(j-i+1==B){
                ans.push_back(li.front());
                
                if(li.front()==A[i]){
                    li.pop_front();
                }
                i++,j++;
            }
        }

    return ans;
    }
};