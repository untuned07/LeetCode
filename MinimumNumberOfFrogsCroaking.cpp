class Solution {
public:
    int minNumberOfFrogs(string croakOfFrogs) {
        int n = croakOfFrogs.size();
        int a[5] = {0, 0, 0, 0, 0};
        int ex = 0, use = 0;
        int ans = 0;
        for(char i : croakOfFrogs){
            if(i == 'c') {a[0]++;
                use++;
            }else if(i=='r') a[1]++;
            else if(i == 'o') a[2]++;
            else if(i == 'a') a[3]++;
            else if(i == 'k') {a[4]++;
                use--;
            }else ex++;
            ans = max(ans, use);
            if(a[0]<a[1] || a[1]<a[2] ||a[2]<a[3] || a[3]<a[4]) return -1;
        }
        if(ex) return -1;
        if(use == 0 && a[0]==a[1] && a[1] == a[2] && a[2]==a[3] && a[3]==a[4]){
            return ans;
        }
        return -1;
    }
};