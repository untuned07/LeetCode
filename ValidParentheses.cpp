// Runtime: 0ms
// Beats: 100%
// Memoty: 6.3 MB
// Beats: 56.50%

class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;
        for(auto i: s){
            if(i =='(' || i == '{' || i == '[') myStack.push(i);
            else{
                if(myStack.empty() || abs(i - myStack.top()) > 2) return false;
                else myStack.pop();
            }
        }
        return myStack.empty();
    }
};