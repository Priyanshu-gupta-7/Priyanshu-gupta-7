// leetcode11 medium
class Solution {
public:
    int mod(int a){
        return a > 0 ? a : -a;
    }
        int maxArea(vector<int>& height) {
            int n = height.size();
            int i = 0;
            int j = n-1;
            
            int minindex = i;
            int maxindex = j;
            
            if(height[minindex] > height[maxindex]){
                minindex = j;
                maxindex = i;            
            }
            int max = height[minindex] * (j-i); 

            while(i < j){
                if(minindex == i){
                    while(i < j and height[minindex] >= height[i]) i++;
                }else{
                    while(i < j and height[minindex] >= height[j]) j--;
                }
                
                if(i >= j) return max;
                
                if(height[i] > height[j]) {
                    minindex = j;
                    maxindex = i;
                }else{
                    maxindex = j;
                    minindex = i;
                }
                int smallContainer = height[minindex] * (j-i);
                if(smallContainer > max) max = smallContainer;
            }
            return max;
        
    // brute force O(N2), O(1)

    //     int max = 0;
    //     for(int i = 0; i < height.size(); i++){
    //         for(int j =0; j < height.size(); j++){
    //             // if(i==j){
    //             //     continue;
    //             // }
    //             int currentmax = min(height[i], height[j]) * mod(i-j);
    //             if(max < currentmax){
    //                 max = currentmax;
    //             }
    //         }
    //     }
    //     return max;
    
    }
};
