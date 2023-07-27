class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int sz = size(nums), diff=INT_MAX, ans;
        for(int i=0; i<sz; i++){
            int j=i+1, k=sz-1;
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if(abs(sum-target) < diff){
                    diff = abs(sum-target);
                    ans = sum;
                }
                if(sum==target) return sum;
                if(sum<target) j++;
                else k--;
            }
        }
        return ans;
    }
};
