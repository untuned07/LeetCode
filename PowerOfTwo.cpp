class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n < 1) return false;
        int count = 0;
        while(n){
            if(n%2 == 1) count++;
            n = n/2;
        }
        if(count > 1) return false;
        return true;
    }
};