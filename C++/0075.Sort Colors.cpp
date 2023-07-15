class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red=0, white=0, blue=0, i=0;
        for(auto n: nums){
            if(n==0) red++;
            if(n==1) white++;
            if(n==2) blue++;
        }
        while(red--) nums[i++] = 0;
        while(white--) nums[i++] = 1;
        while(blue--) nums[i++] = 2;
    }
};
