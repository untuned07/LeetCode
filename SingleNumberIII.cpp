class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        if(nums.size() == 2) return nums;
        vector <int> solution;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=1; i<n; i+=2){
            if(nums[i] != nums[i-1]) {
                solution.push_back(nums[i-1]);
                i--;
            }
        }
        if(solution.size() == 1) solution.push_back(nums[n-1]);
        return solution;
    }
};