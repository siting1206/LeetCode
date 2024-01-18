class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int max = size(candyType)/2;
        unordered_set<int> s(candyType.begin(), candyType.end());
        if(size(s)>max) return max;
        return size(s);
    }
};
