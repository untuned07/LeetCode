// Best time complexity achieved! Beats 100%
// Runtime : 0ms

// Memory : 8.5MB
// Beats 45.67%

// I think I will need to solve without using solution vector for better space complexity



#include <vector>
using namespace std;
// above lines are used just to use this program in VS Code


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i : nums){
            sum += i;
            solution.push_back(sum);
        }
        return solution;
    }
private:
    int sum = 0;
    vector<int> solution;
};