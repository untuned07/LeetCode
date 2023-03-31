// Runtime: 4ms
// Beats 32.34%
// Memory Usage: 9.2MB
// Beats 35.57%

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0;
        while(i<m && j <n){
            if(nums1[i] < nums2[j]){
                solve.push_back(nums1[i]);
                i++;
            }else{
                solve.push_back(nums2[j]);
                j++;
            }
        }
        while(i < m){
            solve.push_back(nums1[i]);
            i++;
        }
        while(j < n){
            solve.push_back(nums2[j]);
            j++;
        }
        nums1 = solve;
    }
private:
    vector <int> solve;
};