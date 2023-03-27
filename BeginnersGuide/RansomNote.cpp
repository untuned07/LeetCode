class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int m = ransomNote.size();
        int n = magazine.size();
        unordered_map <char, int> mapper;
        for(int i=0; i<m; i++){
            mapper[ransomNote[i]]++;
        }
        for(int i=0; i<n; i++){
            mapper[magazine[i]]--;
        }
        for(auto x: mapper){
            if(x.second > 0){
                return false;
            }
        }
        return true;
    }
};