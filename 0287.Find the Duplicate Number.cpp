class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l=1, r=size(nums)-1;
        while(l<=r){ // pigeonhole principle
            int mid = (l+r)/2, cnt=0;
            for(auto i: nums){
                if(i<=mid) cnt++;
            }
            if(cnt<=mid) l=mid+1;
            else r=mid-1;
        }
        return l;
    }
};
