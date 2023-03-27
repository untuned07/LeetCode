using namespace std;
#include <vector>
#include <iostream>

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        row = accounts.size();
        column = accounts[0].size();
        // std::cout <<row <<" " <<column <<std::endl;
        for(int i=0; i<row; i++){
            sum = 0;
            for(int j=0; j<column; j++){
                sum += accounts[i][j];
            }
            maxVal = max(maxVal, sum);
        }
        return maxVal;
    }
private:
    int maxVal = INT_MIN;
    int row = 0;
    int column = 0;
    int sum = 0;
};