class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int N= nums.size();
        int dp[N];
        int ans=1;
        for(int i=N-1;i>=0;i--)
        {
            int maxx=0;
            if(i==N-1)
            {
                dp[i]=1;
                ans=max(dp[i],ans);
                continue;
            }
            for(int j=i+1;j<N;j++)
            {
                if(nums[i]<nums[j])
                {
                    maxx=max(maxx,dp[j]);
                }
            }
            dp[i]=maxx+1;
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};
