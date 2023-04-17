// Runtime: 4ms     Beats: 61.53%
// Memory: 9MB      Beats: 16.58%

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> sol;
        int n = candies.size();
        int maxi = INT_MIN;
        for(int i:candies){
            maxi = max(maxi, i);
        }
        for(int i:candies){
            if(i+extraCandies >=maxi) sol.push_back(true);
            else sol.push_back(false);
        }
        return sol;
    }
};