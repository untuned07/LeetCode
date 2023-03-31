// Runtime: 47ms
// Memory Usage: 27.3 mb
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i: nums){
            int temp = i * i;
            result.push_back(temp);
        }
        std::sort(result.begin(), result.end());
        return result;
    }
private:
    vector<int>result;
};