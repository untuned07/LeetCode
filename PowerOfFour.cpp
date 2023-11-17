class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 1) return true;
        if(n < 4) return false;
        int count = 0;
        while(n>1){
            if(n%4 != 0)count++;
            n =n/4;
        }
        if(count) return false;
        return true;
    }
};