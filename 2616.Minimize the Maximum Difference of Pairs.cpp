class Solution {
public: // binary search by value
    int minimizeMax(vector<int>& nums, int p) {
        if(p==0) return 0;
        sort(nums.begin(), nums.end());
        int sz=size(nums), l=0, r=nums[sz-1]-nums[0];
        while(l<=r){ // Suppose mid is the max difference
            int mid=(l+r) / 2, cnt=0;
            for(int i=1; i<sz; i++){
                if(nums[i]-nums[i-1]<=mid){
                    cnt++; // how many pair's diff <= max_diff
                    i++;
                }
            }
            if(cnt<p) l=mid+1;
            else r=mid-1; // too many pairs, reduce the value of mid
        }
        return l;
    }
};
