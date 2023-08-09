class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        int min_d = arr[1]-arr[0];
        for(int i=1; i<size(arr); i++){
            int d = arr[i]-arr[i-1];
            if(d<min_d){
                min_d = d;
                ans.clear();
            }
            if(d==min_d) ans.push_back({arr[i-1], arr[i]});
        }
        return ans;
    }
};
