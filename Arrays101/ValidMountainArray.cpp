// Runtime: 34ms
// Beats 38.19%
// Memory: 22.5MB
// Beats 58.40%

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(n <= 2){
            return false;
        }
        int max = 0, index = 0;
        for(int i=0; i<n; i++){
            if(arr[i] > max){
                max = arr[i];
                index = i;
            }
        }
        if((index + 1 == n) || (index == 0)){
            return false;
        }
        for(int i=0; i<index-1; i++){
            if (arr[i] == arr[i+1]){
                return false;
            }
            if(arr[i] > arr[i+1]){
                return false;
            }
        }
        for(int i=index; i<n-1; i++){
            if (arr[i] == arr[i+1]){
                return false;
            }
            if(arr[i] < arr[i+1]){
                return false;
            }
        }
        return true;
    }
};