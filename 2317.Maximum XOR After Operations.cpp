class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        int x = 0;
        for(auto &n: nums) x |= n;
        return x;
    }
};
