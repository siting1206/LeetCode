class Solution {
public:
    int countOdds(int low, int high) {
        // (high+1)/2: odd number between 1 to high
        // (low/2): odd number between 1 to (low-1)
        return (high+1)/2 - (low/2);
    }
};
