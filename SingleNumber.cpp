class Solution {
public:
    int singleNumber(vector<int>& nums) {

        // MY APPROACH //

        // unordered_map <int, int> number;
        // for(auto i: nums) number[i]++;
        // for(auto j: number) {
        //     if(j.second == 1){
        //         return j.first;
        //     }
        // }
        // return -1;

        // BETTER APPROACH //
        int ans = 0;
        for(auto i: nums){
            ans = ans ^ i;
        }
        return ans;
    }
};