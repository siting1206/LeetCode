class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r_sz = size(matrix), c_sz = size(matrix[0]), r = 0, c = c_sz-1;
        while(r<r_sz && c>=0){
            if(matrix[r][c]==target) return true;
            else if(matrix[r][c]<target) r++;
            else c--;
        }
        return false;
    }
};
