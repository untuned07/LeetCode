// Runtime: 133ms
// Beats 26.52%
// Memory: 68.7MB
// Beats 15.31%


class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
//         TIME LIMIT EXCEEDED
        /*
        int maxRight = 0;
        int n = arr.size();
        for(int i=0; i<n; i++){
            if(i == n-1){
                arr[i] = -1;
                break;
            }
            maxRight = 0;
            for(int j=i+1; j<n; j++){
                if(arr[j] > maxRight){
                    maxRight = arr[j];
                }
            }
            arr[i] = maxRight;
        }
        return arr;
        */
        
        int maxRight = 0;
        int n = arr.size();
        for(int i=0; i<n; i++){
            if(i == n-1){
                arr[i] = -1;
                break;
            }
            maxRight = 0;
            int maxIndex = 0;
            for(int j=i+1; j<n; j++){
                if(arr[j] > maxRight){
                    maxRight = arr[j];
                    maxIndex = j;
                }
            }
            for(int k = i; k<maxIndex; k++){
                arr[k] = maxRight;
            }
            i = maxIndex-1;
        }
        return arr;
    }
};