class Solution {
public:
    int arraySign(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(count(nums.begin(), nums.end(), 0)) return 0;
        int neg=0;
        for(auto n: nums){
            if(n<0) neg++;
            else break;
        }
        if(neg%2==0) return 1;
        return -1;
    }
};
