class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int count = 0, sld = 0;
        int ans = 0;
        for(int i=0; i<n; i++){
            if(nums[i] == 0) count++;
            while(count > 1){
                if(nums[sld] == 0) count--;
                sld++;
            }
            ans = max(ans, i-sld+1-count);
        }
        if(ans == n) return n-1;
        return ans;
    }
};