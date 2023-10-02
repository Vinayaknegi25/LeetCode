class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        vector<vector<int>> result;
        for(int i=0;i<n;i++)
        {
            int start=intervals[i][0];
            int end=intervals[i][1];
            if(!result.empty() && end <= result.back()[1])
                continue;
            for(int j=i+1;j<n;j++)
            {
                if(intervals[j][0]<=end)
                {
                    end=max(end,intervals[j][1]);
                }
                else
                    break;
            }
            result.push_back({start,end});
        }
        return result;
    }
};
