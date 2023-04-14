// Runtime: 13ms
// Beats: 33.3%
// Memory: 15.4 MB
// Beats: 68.46%

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n = pushed.size();
        stack <int> st;
        int j = 0;
        for(auto val : pushed){
            st.push(val);
            while(st.size() > 0 && st.top() == popped[j]){ 
                st.pop();
                j++;
            }
        }
        return st.size() == 0;
    }
};