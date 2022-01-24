class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long int sum = accumulate(chalk.begin(),chalk.end(),0ll);
        long long int rem;
        
        if(k >= sum) rem = k%sum;
        else rem = k;
        cout << rem << endl;
        // cout << sum << ' ' << rem << endl;
        
        if(rem == 0) return 0;
        int idx = 0;
        int N = chalk.size();
        cout << N << endl;
        while(1){
            rem -= chalk[idx%N];
            // cout << rem << endl;
            if(rem < 0) return idx%N;
            else if(rem == 0) return (idx+1)%N;
            idx++;
        }
        return idx%N;
    }
};