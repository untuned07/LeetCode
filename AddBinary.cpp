class Solution {
public:
    string addBinary(string a, string b) {
        string sol;
        int i=a.length()-1;
        int j = b.length()-1;
        int pass = 0;
        while(i >= 0 || j >= 0){
            int sum = pass;
            if(i >=0) sum += a[i--]-'0';
            if(j >=0) sum += b[j--]-'0';
            pass = sum>1?1:0;
            sol = to_string(sum % 2) + sol;
        }
        if(pass) sol = to_string(pass) + sol;
        return sol;
    }
};