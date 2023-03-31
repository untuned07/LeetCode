// Runtime: 8ms
// Beats 68.63%
// Memory: 10 MB
// Beats 85.71 

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i=0; i<arr.size(); i++){
            for(int j = 0; j<arr.size(); j++){
                if(j != i && arr[i] == 2 * arr[j]){
                    return true;
                }
            }
        }
        return false;
    }
};