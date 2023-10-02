class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix[0].size();

        //transpose of given matrix 
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        int low=0,high=n-1;
        while(low<high)
        {
            for(int i=0;i<n;i++)
            {
            
                swap(matrix[i][low],matrix[i][high]);
            }
            low++;
            high--;
        }
    }
};
