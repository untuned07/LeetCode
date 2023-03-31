// Runtime: 9ms
// Beats 82.48%
// Memory usage: 18.4MB
// Beats 48.49%

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1] != nums[i]){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};