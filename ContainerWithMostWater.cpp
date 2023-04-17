// Runtime: 94ms
// Beats: 72.19%
// Memory: 59.1 MB
// Beats: 8.35%

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxVal = 0;
        int i = 0, j = n-1;
        while(i < j){
            if(height[i] > height[j]){
                maxVal = max(maxVal, (j-i)*height[j]);
                j--;
            }else{
                maxVal = max(maxVal, (j-i)*height[i]);
                i++;
            }
        }
        return maxVal;
    }
};