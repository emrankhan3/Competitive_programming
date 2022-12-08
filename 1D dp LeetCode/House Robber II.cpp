class Solution {
public:
    int dp[200]={0};
    int rob(vector<int>& v) {
        if(v.size()==1)return v[0];
        if(v.size()==2)return max(v[0],v[1]);
        if(v.size()==3)return max(v[0],max(v[1],v[2]));
        int n = v.size();
        dp[1]=v[0];
        if(n>=2)dp[2]=v[1];
        if(n>=3)dp[3]=dp[1]+v[2];
        for(int i=4; i<=n-1; i++)
        {
            dp[i]=max(dp[i-2],dp[i-3])+v[i-1];
            //dp[i]=max(dp[i-2],dp[i-3])+v[i-1];
        }
        int ans = max(dp[n-2],dp[n-1]);
        reverse(v.begin(),v.end());
        dp[1]=v[0];
        if(n>=2)dp[2]=v[1];
        if(n>=3)dp[3]=dp[1]+v[2];
        for(int i=4; i<=n-1; i++)
        {
            dp[i]=max(dp[i-2],dp[i-3])+v[i-1];
            //dp[i]=max(dp[i-2],dp[i-3])+v[i-1];
        }
        dp[n-1]=max(dp[n-1],dp[n-2]);
    return max(ans,dp[n-1]);
    }
};
