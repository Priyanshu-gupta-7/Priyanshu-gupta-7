// leetcode #122 medium fb
class Solution {
public:
    int maxProfit(vector<int>& prices) {
//         valley peak method
            int size = prices.size();
            if(size <= 1) return 0;
            
            int v = prices[0];
            int p = v;
            int sum = 0;
            
            int i =0;
            while(i < size-1){
                while(i < size-1 and prices[i] >= prices[i+1]){
                    i++;
                }
                v = prices[i];
                while(i < size-1 and prices[i] <= prices[i+1] ){
                    i++;
                }       
                p = prices[i];
                sum += p-v;
            }
            return sum;
//         int size = prices.size();
//         if(size <= 1) return 0;
//         if(size == 2){
//             if(prices[1] < prices[0]){
//                 return 0;
//             }
//             return prices[1] - prices[0];
//         }
        
//         int maxindex = 0;
//         int minindex = 0;
//         int sum = 0;
        
//         for(int i = 0; i < size-1; i++){
//             if(maxindex < minindex){
//                 maxindex = minindex;
//             }

//             if(prices[i] < prices[minindex]){
//                 minindex = i;
//             }
//             if(prices[i] > prices[maxindex]){
//                 maxindex = i;
//             }
//             if(i == size-1 and maxindex >= minindex){
//                 sum += prices[maxindex] - prices[minindex];
//                 return sum;
//             }
//             if(prices[i] > prices[i+1] and maxindex > minindex and maxindex== i and i < size-1){
//                 sum += prices[maxindex] - prices[minindex];
//                 minindex = i+1;
//                 maxindex = i+1;
//             }
//         }
//         return sum;

        
        
        
        
        
        
    }
};
