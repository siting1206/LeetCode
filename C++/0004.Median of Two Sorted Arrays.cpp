class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> n3;
        for(auto n:nums1) n3.push_back(n);
        for(auto n:nums2) n3.push_back(n);
        sort(n3.begin(), n3.end());
        int sz = size(n3);
        if(sz%2==0) return (n3[sz/2-1] + n3[sz/2]) / 2.0;
        else return n3[sz/2];
    }
};
