class Solution {
public:
    int nn;
    // const int mx = 1e5+100;
    long long int dp[500005];
    struct Job{
        int start; int end; int profit;
        Job(): start(-1),end(-1),profit(-1) {}
        Job(int s,int d,int p): start(s), end(d), profit(p) {}
        bool operator < (const Job &a){
            return start < a.start;
        }
        bool operator > (const Job &a){
            return start > a.start;
        }
        bool operator <= (const Job &a){
            return start <= a.start;
        }
        bool operator >= (const Job &a){
            return start >= a.start;
        }
    };
    vector<Job> v;
    
    long long int solve(int pos){
        if(pos >= nn) return 0;
        if(dp[pos] != -1) return dp[pos];
        Job aux(v[pos].end,-1,-1);
        long long int nPos = int(lower_bound(v.begin() + pos,v.end(),aux) - v.begin()); //next non-overlapping job
        long long int ans = max(solve(pos+1),solve(nPos) + v[pos].profit + v[pos].end - v[pos].start); // without v[pos] and with v[pos]
        return dp[pos] = ans;
    }
    
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        nn = rides.size();
        vector<int> startTime,endTime,profit;
        for(int i=0;i<rides.size();i++){
            startTime.push_back(rides[i][0]);
            endTime.push_back(rides[i][1]);
            profit.push_back(rides[i][2]);
        }
        memset(dp,-1,sizeof(dp));
        v.resize(nn);
        for(int i=0;i<nn;i++){
            Job aux(startTime[i],endTime[i],profit[i]);
            v[i] = aux;
        }
        sort(v.begin(),v.end());
        long long int ans = solve(0);
        return ans;
      
    }
};