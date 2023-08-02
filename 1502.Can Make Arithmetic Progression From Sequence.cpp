class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int sz = size(arr);
        sort(arr.begin(), arr.end());
        for(int i=1; i<sz-1; i++){
            if(abs(arr[i-1]-arr[i]) != abs(arr[i+1]-arr[i])) return false;
        }
        return true;
    }
};
