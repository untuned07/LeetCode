// Runtime: 90ms
// Beats: 40.28%
// Memory: 34.1 MB
// Beats: 47.18%


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        auto last = unique(nums.begin(), nums.end());
        nums.erase(last, nums.end());
        int j = 0;
        for(int i=1; i<=n; i++){
            if(nums[j] == i){
                j++;
            }else{
                sol.push_back(i);
            }
        }
        return sol;
    }
    
private:
    vector<int> sol;
};