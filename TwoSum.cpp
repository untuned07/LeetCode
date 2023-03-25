class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int maxlen = nums.size();
        // std::cout <<maxlen <<std::endl;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if((nums[i]+ nums[j] == target)){
                    // twoSum.push_back(i);
                    // twoSum.push_back(j);
                    ar[0] = i;
                    ar[1] = j;
                    break;
                }
            }
        }
        return ar;
    }
private:
    vector <int> ar = {0, 0};
};