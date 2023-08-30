class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        int n=size(nums), last=nums[n-1];
        long long ans=0;
        for(int i=n-2; i>=0; i--){
            if(nums[i]>last){
                int tmp = nums[i]/last;
                if(nums[i]%last) tmp++;
                last = nums[i]/tmp;
                ans += tmp-1;
            }
            else last = nums[i];
        }
        return ans;
    }
};
