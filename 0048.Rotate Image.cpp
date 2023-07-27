class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0; i<size(matrix); i++){
            for(int j=i; j<size(matrix); j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0; i<size(matrix); i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
