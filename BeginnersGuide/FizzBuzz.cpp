class Solution {
public:
    vector<string> fizzBuzz(int n) {
        for(int i=1; i<=n; i++){
            if(i%3 == 0 && i%5 == 0){
                solution.push_back("FizzBuzz");
            }else if(i%3 == 0){
                solution.push_back("Fizz");
            }else if(i%5 == 0){
                solution.push_back("Buzz");
            }else{
                value = to_string(i);
                solution.push_back(value);
            }
        }
        return solution;
    }
private:
    vector <string> solution;
    string value;
};