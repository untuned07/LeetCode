class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            // std::cout <<nums[i] <<" " <<target <<std::endl;
            if(nums[i]==target || nums[i]>target){
                index = i;
                break;
            }else{
                index = nums.size();
            }
        }
        return index;
    }
private:
    int index = 0;
};