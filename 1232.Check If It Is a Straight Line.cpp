class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coord) {
        int dx=coord[1][0]-coord[0][0], dy=coord[1][1]-coord[0][1];
        for(int i=2; i<size(coord); i++){
            if((coord[i][0]-coord[0][0])*dy != (coord[i][1]-coord[0][1])*dx) return false;
        }
        return true;
    }
};
