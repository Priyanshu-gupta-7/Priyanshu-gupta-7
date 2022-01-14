//leetcode #121 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
//         BRUTE FORCE O(N^2), O(1)
        // int profit = 0;
        // int size = prices.size();
        // if(size <= 1){
        //     return profit;
        // }
        // for(int i=0; i < size-1; i++){
        //     int p1 = prices[i];
        //     for(int j = i+1; j < size; j++){
        //         int p2 = prices[j];
        //         int diff = p2-p1;
        //         if(profit < diff){
        //             profit = diff;
        //         }
        //     }
        // }
        // return profit;
        
//        OPTIMISED 0(N), O(1) maintaining a min so far and finding the difference with the current element  
        int size = prices.size();
        if(size <=1){
            return 0;
        }
        int minsofar = prices.at(0);
        int maxprofit = 0;
        
        for(int i = 0; i < size; i++){
            if(prices[i] < minsofar){
                minsofar = prices[i];
            }
            int diff = prices[i] - minsofar;
            if(diff > maxprofit){
                maxprofit = diff;
            }
        }
        return maxprofit;
    }
};
