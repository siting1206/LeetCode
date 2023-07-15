class Solution {
public:
    int mySqrt(int x) {
        int left = 1, right = x, mid;
        if(x == 0) return 0;
        while(left <= right){
            mid = left + (right-left)/2;
            if(mid==x/mid) return mid;
            if(mid<x/mid) left = mid+1;
            if(mid>x/mid) right = mid-1;
        }
        return right;
    }
};
