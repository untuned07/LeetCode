// Runtime: 35ms
// Beats 87.55% of other submissions
// Memory Usage: 36.2 mb

#include <vector>
using namespace std;
// above two lines added to check program in visual studio code.


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCO = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1){
                count++;
                if(count > maxCO){
                    maxCO = count;
                }
            }else{
                count = 0;
            }
        }
        return maxCO;
    }
};