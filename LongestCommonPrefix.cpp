// Runtime: 6ms
// Beats:39.82%
// Memory: 9.2 MB
// Beats: 83.29%

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int tempsize = INT_MAX;
        for(int i=0; i<n; i++){
            if(strs[i].size() < tempsize) tempsize = strs[i].size();
        }
        if(n == 1) return strs[0];
        for(int i=0; i<n-1; i++){
            for(int j=0; j<tempsize; j++){
                if(strs[i][j] != strs[i+1][j]){
                    tempsize = j;
                }
            }
        }
        for(int i=0; i<tempsize; i++) solstr += strs[0][i];
        return solstr;
    }
private:
    string solstr = "";
};