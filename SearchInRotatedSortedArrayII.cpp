// Runtime: 
// Beats:
// Memory:
// Beats:

/*      Brute Force Approach        */

/*
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == target) return true;
        }
        return false;
    }
};
*/

/*      Optimized Approach      */
class Solution {
public: 
    bool search(vector<int>&nums, int target) {
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target) return true;
            if(nums[low]<nums[mid]){
                if(target>=nums[low] && target<nums[mid]) high=mid-1;
                else low=mid+1;
            }else if(nums[low]>nums[mid]){
                if(target>nums[mid] && target<=nums[high])  low=mid+1;
                else high=mid-1;
            }
            else low++;
        }
        return false;
    }
};