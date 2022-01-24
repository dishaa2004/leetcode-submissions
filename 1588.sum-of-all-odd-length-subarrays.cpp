class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
      int n = arr.size();
      int sum=0;
      for (int i=0; i <n; i++)
        {
            for (int j=i; j<n; j++)
            {
                vector<int> v;
                for (int k=i; k<=j; k++)
                {
                    v.push_back(arr[k]);
                }
                if(v.size()%2 == 1)
                    sum+=accumulate(v.begin(),v.end(),0);
            }
        }
        return sum;
    }
};