class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long totalTime = 0;
        for(auto batt: batteries) totalTime+=batt;
        sort(batteries.rbegin(), batteries.rend()); // descending

        for(int i=0; i<size(batteries); i++,n--){
            // every computer's battery is enough
            if(batteries[i] <= (totalTime/n)) break;

            // other computer's battery is not enough
            totalTime -= batteries[i];
        }
        return totalTime/n;
    }
};
