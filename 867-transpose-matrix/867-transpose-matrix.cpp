class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> v;
        int n=matrix.size();
        int m = matrix[0].size();
        vector<int> temp;
        for(int i=0;i<m;i++)
        {
            temp.clear();
            for(int j=0;j<n;j++)
            {
                temp.push_back(matrix[j][i]);
            }
            v.push_back(temp);
        }
        return v;
    }
};