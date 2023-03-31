// Runtime: 0ms
// Beats 100%
// Memory Usage: 9MB

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i: nums){
            if(i != val){
                solutionArray.push_back(i);
            }
        }
        nums = solutionArray;
        return solutionArray.size();
    }
private:
    vector <int> solutionArray;
};