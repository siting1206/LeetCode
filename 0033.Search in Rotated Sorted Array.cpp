class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0, r=size(nums)-1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[mid]==target) return mid;
            if(nums[l]<=nums[mid]){ // the left part of the array is non-rotated
                if(nums[l]<=target && nums[mid]>=target) r = mid-1; // check the target is in this part or not
                else l = mid+1; // search the right part
            }
            else{
                if(nums[mid]<=target && target<=nums[r]) l = mid+1;
                else r = mid-1;
            }
        }
        return -1;
    }
};
