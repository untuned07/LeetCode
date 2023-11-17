class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) return 1;
        int temp = n;
        int count = 0;
        while(temp != 0){
            temp = temp >> 1;
            count++;
        }
        temp = pow(2, count) -1;
        int ans = n^temp;
        return ans;
    }
};