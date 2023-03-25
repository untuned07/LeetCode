class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return statement;
        }
        int temp = x;
        while(temp){
            rev = (rev * 10)+(temp % 10);
            temp = temp / 10;
        }
        if(rev == x){
            statement = true;
        }
        return statement;
    }
private:
    bool statement = false;
    long long int rev = 0;
};