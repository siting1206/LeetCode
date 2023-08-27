class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=size(matrix), n=size(matrix[0]);
        vector<vector<int>> ans(n, vector<int>(m));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                ans[j][i] = matrix[i][j];
            }
        }
        return ans;
    }
};
