// Runtime: 0ms
// Beats: 100%
// Memory: 11.2 MB
// Beats: 6.77%

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if((n==0)|| (n==1 && nums[0]!=target))return -1;
        for(int i=0; i<n; i++){
            if(nums[i] == target) return i;
        }
        return -1;
    }
};