class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>> row(9), col(9), grid(9);
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j] != '.'){
                    int c = board[i][j] - '0';
                    if(row[i].count(c) || col[j].count(c) || grid[(i/3)*3 + (j/3)].count(c)) return false;

                    row[i].insert(c);
                    col[j].insert(c);
                    grid[(i/3)*3 + (j/3)].insert(c);
                }
            }
        }
        return true;
    }
};
