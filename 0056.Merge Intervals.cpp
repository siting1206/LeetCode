class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // vector.erase(time consuming)
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        for(int i=0; i<size(intervals); i++){
            if(ans.empty() || ans.back()[1] < intervals[i][0]){
                ans.push_back(intervals[i]);
            }
            else ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        }
        return ans;
    }
};
