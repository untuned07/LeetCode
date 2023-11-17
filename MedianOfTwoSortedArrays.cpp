class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> merge;
        int i=0, j=0;
        while(i <n && j <m){
            if(nums1[i] <= nums2[j]){
                merge.push_back(nums1[i]);
                i++;
            }else{
                merge.push_back(nums2[j]);
                j++;
            }
        }
        if(i==n){
            while(j < m){
                merge.push_back(nums2[j]);
                j++;
            }
        }
        if(j == m){
            while(i <n){
                merge.push_back(nums1[i]);
                i++;
            }
        }
        int newSize = n+m;
        double median = 0;
        if(newSize %2 == 0){
            median = (double)(merge[newSize/2] + merge[(newSize/2)-1])/(double)2;
        }else{
            median = merge[newSize/2];
        }
        return median;
    }
};