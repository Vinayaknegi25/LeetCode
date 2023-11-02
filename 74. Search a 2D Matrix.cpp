**Naive Approach**
 class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> v;
        int m= matrix.size();
        int n= matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                v.push_back(matrix[i][j]);
            }
        }
        int low=0,high=v.size();
        int mid=0;
        if(target>v[high-1])
            return false;
            
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(target==v[mid])
                return true;
            if(target<v[mid])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }

        }
        for(auto itr:v)
            cout<< itr<<" ";
        return false;
    }
};
