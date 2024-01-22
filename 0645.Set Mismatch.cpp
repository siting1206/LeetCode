class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> cnt(size(nums));
        vector<int> v(2);
        for (auto x: nums){
            cnt[x-1]++;
        }

        for (int i=0; i<size(nums); i++){
            if (cnt[i]==2) v[0]=i+1;
            if (!cnt[i]) v[1]=i+1;
        }
        return v;
    }
};
