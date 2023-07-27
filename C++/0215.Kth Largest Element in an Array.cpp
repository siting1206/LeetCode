class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        int sz = size(nums);
        for(auto n: nums) pq.push(n);
        while(--k) pq.pop();
        return pq.top();
    }
};
