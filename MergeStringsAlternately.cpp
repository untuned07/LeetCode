// Runtime: 0ms     Beats: 100%
// Memory: 6.4MB   Beats: 19.57%

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        int i=0;
        while(i<n && i <m){
            sol += word1[i];
            sol+= word2[i];
            i++;
        }
        if(i == n){
            for(i; i<m; i++) sol+= word2[i];
        }
        if(i == m){
            for(i; i<n; i++) sol+= word1[i];
        }
        return sol;
    }
private:
    string sol;
};