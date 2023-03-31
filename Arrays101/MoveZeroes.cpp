// Runtime: 23ms
// Beats 75.87%
// Memory: 19.3MB
// Beats 65.83%

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;
        int n = nums.size();
        int temp;
        for(int i=0; i<n; i++){
            if(nums[i] != 0){
                temp = nums[i];
                // nums[index] = nums[i];
                nums[i] = 0;
                nums[index] = temp;
                index++;
            }
        }
        for(int i=index; i<n; i++){
            nums[i] = 0;
        }
    }
};