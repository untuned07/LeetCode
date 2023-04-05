// Runtime: 0ms
// Beats: 100%
// Memory: 6MB
// Beats: 65.1%

class Solution {
public:
    int reverse(int x) {
        long long int rev, temp = x;
        bool neg = false;
        if(x < 0) {
            neg = true;
            temp = (long long int)x * -1;
        }
        while(temp > 0){
            rev = (rev * 10) + (temp % 10);
            temp = temp / 10;
        }
        if(neg) rev = rev * -1;
        if(rev > 2147483647 || rev < -2147483648) return 0;
        else{
            x = (int)rev;
            return x;
        }
        return 0;
    }
};