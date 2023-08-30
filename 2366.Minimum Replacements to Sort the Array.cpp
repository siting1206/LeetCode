class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        int n=size(nums), last=nums[n-1];
        long long ans=0;
        for(int i=n-2; i>=0; i--){
            if(nums[i]>last){
                int tmp = nums[i]/last;
                cout << nums[i] << " " << last << " " << endl;
                if(nums[i]%last) tmp++;
                last = nums[i]/tmp;
                cout << tmp << " " << last << " " << endl;
                ans += tmp-1;
            }
            else last = nums[i];
        }
        return ans;
    }
};
