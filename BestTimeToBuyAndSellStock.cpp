class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // First thought: 
        /*
        for(int i=0; i<prices.size(); i++){
            for(int j=i+1; j<prices.size(); j++){
                if(prices[i]>prices[j]){
                    continue;
                }
                min = prices[j]-prices[i];
                if(min >max){
                    max = min;
                }
            }
        }
        */

        // Can I try to optimize it?:
    int lowVal = INT_MAX;
    int diff = 0;
    int maxVal = 0;
        for(int i=0; i<prices.size(); i++){
            if(lowVal > prices[i]){
                lowVal = prices[i];
                // std::cout <<"Ist" <<std::endl;
            }
            diff = prices[i] - lowVal;
            if(maxVal < diff){
                maxVal = diff;
                // std::cout<<"IInd" <<std::endl;
            }
        }
        return maxVal;
    }
// private:
//     int lowVal = INT_MAX;
//     int diff = 0;
//     int maxVal = 0;
};