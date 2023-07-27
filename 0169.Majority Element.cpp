class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major=0, count=0;
        for(auto n: nums){
            if(count == 0) major = n;
            if(major == n) ++count;
            else --count;
        }
        return major;
    }
};
