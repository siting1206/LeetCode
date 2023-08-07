class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row_sz = size(matrix[0]), l = 0, r = size(matrix)*row_sz-1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if (matrix[mid/row_sz][mid%row_sz] == target) return true;
            else if(matrix[mid/row_sz][mid%row_sz] > target) r = mid-1;
            else l = mid+1;
        }
        return false;
    }
};
