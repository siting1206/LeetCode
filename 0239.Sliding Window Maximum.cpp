class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq; // for index
        vector<int> ans;
        for(int i=0; i<size(nums); i++){
            if(!dq.empty() && dq.front()==i-k) dq.pop_front(); // numbers of the dq == k
            while(!dq.empty() && nums[dq.back()]<nums[i]) dq.pop_back();
            dq.push_back(i);
            if(i>=k-1) ans.push_back(nums[dq.front()]); // the first one is largest
        }
        return ans;
    }
};
