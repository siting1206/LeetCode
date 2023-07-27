class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> tmp;
        int i=0, j=0;
        while(i<size(nums1) && j<size(nums2)){
            if(nums1[i]==nums2[j]){
                tmp.push_back(nums1[i]);
                i++;
                j++;
            }
            else{
                if(nums1[i] > nums2[j]) j++;
                else i++;
            }
        }
        return tmp;
    }
};
