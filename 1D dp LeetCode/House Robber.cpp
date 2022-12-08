class Solution {
public:
    int dp[200]={0};
    int rob(vector<int>& v) {
        int n = v.size();
        dp[1]=v[0];
        if(n>=2)dp[2]=v[1];
        if(n>=3)dp[3]=dp[1]+v[2];
        for(int i=4; i<=n; i++)
        {
            dp[i]=max(dp[i-2],dp[i-3])+v[i-1];
            //dp[i]=max(dp[i-2],dp[i-3])+v[i-1];
        }

    return max(dp[n],dp[n-1]);
    }
};
