class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        for(int i=0; i<size(mat); i++){
            sum += mat[i][i];
        }
        for(int i=0, j=size(mat)-1; j>=0; i++, j--){
            sum += mat[i][j];
        }
        if(size(mat)%2==1) sum-=mat[size(mat)/2][size(mat)/2];
        return sum;
    }
};
