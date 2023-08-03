class Solution {
public:
    bool judgeCircle(string moves) {
        if(size(moves)%2==1) return false;
        int x=0, y=0;
        for(auto m: moves){
            if(m=='R') x++;
            else if(m=='L') x--;
            else if(m=='U') y++;
            else y--;
        }
        if(x==0 && y==0) return true;
        else return false;
    }
};
