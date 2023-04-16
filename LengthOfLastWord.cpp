// Runtime: 5ms     Beats: 31.11%
// Memory: 6.6MB    Beats: 14.50%

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count = 0;
        while(n > 0){
            if(s[n-1] != ' '){
                count++;
            }
            if(s[n-1] == ' ' && count!= 0){
                return count;
            }
            n--;
        }
        return count;
    }
};