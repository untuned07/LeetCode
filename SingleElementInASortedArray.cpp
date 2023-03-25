class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        for(long long int i=0; i<n-1; i=i+2){
            // count = 0;
            // for(int j=0; j<nums.size(); j++){
            //     if(nums[i]==nums[j]){
            //         count++;
            //     }
            // }
            // if(count == 1){
            //     return nums[i];
            // }
            if(nums[i] != nums[i+1]){
                // num = nums[i];
                // break;
                return nums[i];
            }
        }
        return nums[n-1];
    }
// private:
//     int count = 0;
//     int num = -1;
};