// Runtime: 11ms
// Beats: 62.05%
// Memory: 17MB


// I will have to try to decrease the memory usage.
/*
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        for(int i:nums){
            if(i%2 == 0){
                even.push_back(i);
            }else{
                odd.push_back(i);
            }
        }
        for(int i:odd){
            even.push_back(i);
        }
        return even;
    }
private:
    vector <int>even;
    vector <int>odd;
    vector <int> solution;
};

*/


// Better submission: 
// Runtime: 3ms
// Beats: 99.13%
// Memory: 16.1MB
// Beats: 85.98%

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int s = nums.size();
        int i=0, j =0;
        int temp = 0;
        for(int j=0; j<s; j++){
            if(nums[j]%2 == 0){
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
                i++;
            }
        }
        return nums;
    }
};