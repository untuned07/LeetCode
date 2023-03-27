class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        n = nums.size();
        for(int i=0; i<n; i++){
            sum = 0;
            for(int j=0; j<=i; j++){
                sum += nums[j];
            }
            solution.push_back(sum);
        }
        return solution;
    }
private:
    int sum = 0;
    int n = 0;
    vector<int> solution;
};