class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        //sort(weights.begin(), weights.end());
        // for(int i=0; i<weights.size(); i++){
        //     if(maxWeight < weights[i]){
        //         maxWeight = weights[i];
        //     }
        // }
        // std::cout <<maxWeight <<endl;
        // return maxWeight;
        lo = *max_element(weights.begin(), weights.end());
        hi = accumulate(weights.begin(), weights.end(), 0);
        while(lo < hi){
            int mid = lo + (hi - lo) /2;
            cur = 0;
            need = 1;
            for(int w: weights){
                if(cur + w > mid){
                    cur = 0;
                    need++;
                }
                cur += w;
            }
            if(need <= days){
                hi = mid;
            }else{
                lo = mid+1;
            }
        }
        return lo;
    }
private:
    // int maxWeight=INT_MIN;
    // int sum = 0, count =0;
    int lo, hi;
    int cur = 0, need = 1;
};