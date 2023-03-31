// Runtime: 11ms
// Beats 23.60% of other solutions
// Memory: 9.7mb
// Beats 92.18% of other solutions

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i:nums){
            digits = 0;
            while(i > 0){
                digits++;
                i = i/10;
            }
            if(digits%2 == 0){
                count++;
            }
        }
        return count;
    }
private:
    int digits = 0;
};