// Runtime: 0ms     Beats: 100%
// Memory: 6MB      Beats: 8.18%

class Solution {
public:
    int addDigits(int num) {
        while(num > 9){
            num = valSum(num);
        }
        return num;
    }
private:
    int valSum(int n){
        int sum = 0;
        while(n>0){
            sum += n%10;
            n = n/10;
        }
        return sum;
    }
};