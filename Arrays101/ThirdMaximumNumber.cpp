// Runtime: 9ms
// Beats 48.33%
// Memory: 9.1 MB
// Beats: 92.38%

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        int a = INT_MIN, b = INT_MIN, c = INT_MIN;
        bool flag = 0;
        for(int i=0; i<n; i++){
            a = max(a, nums[i]);
        }
        for(int i=0; i<n; i++){
            if(nums[i] != a){
                b = max(b, nums[i]);
            }
        }
        for(int i=0; i<n; i++){
            if(nums[i]!=a && nums[i]!=b){
                c = max(c, nums[i]);
                flag = 1;
            }
        }
        if(flag)return c;
        else return a;
    }
};