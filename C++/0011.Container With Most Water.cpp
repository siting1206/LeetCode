class Solution {
public:
    int maxArea(vector<int>& height) {
        int ma=0, left=0, right = size(height)-1;
        while(left<right){
            int tmp = min(height[left], height[right]) * (right-left);
            ma = max(ma, tmp);
        if(height[left]>height[right]) right--;
        else left++;
        }
        return ma;
    }
};
