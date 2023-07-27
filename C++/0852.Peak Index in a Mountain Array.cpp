class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0, right = size(arr)-1;
        while(left<right){
            int mid = left + (right-left)/2;
            if(arr[mid]>arr[mid+1]) right=mid; // ans is on the left
            else left = mid+1; // ans is on the right
        }
        return left;
    }
};
