// Runtime: 11ms beats 53.73%
// Memory Usage: 10.2 MB

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        for(int i:arr){
            solution.push_back(i);
            if(i == 0){
                solution.push_back(0);
            }
        }
        for(int i= 0; i<n; i++){
            arr[i] = solution[i];
        }
    }
private:
    vector <int> solution;
};