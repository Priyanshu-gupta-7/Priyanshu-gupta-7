//  leetcode #16
class Solution {
public:
    int mod(int a){
        return a > 0 ? a : -a;
    }
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans = nums[0] + nums[1] + nums[2];
        int smallestdiff = mod(target-ans);
//        Brute force O(n2) O(1)
        for(int i = 0; i < nums.size()-2; i++){
            int subsum = nums[i];
            int j = i+1;
            int k = nums.size() - 1;
            while(j < k){
                int newsum = nums[i]+nums[j]+nums[k];
                if(mod(target-newsum) < smallestdiff) ans = newsum;
                smallestdiff = min(smallestdiff, mod(target-newsum));
                if(newsum < target){
                    j++;
                }else if(newsum > target){
                    k--;
                }else return target;
            }
        }
//         return ans;
//         sort(nums.begin(), nums.end());
//         int ans = nums[0] + nums[1]+ nums[2];
//         int smallestdiff = mod(target-ans);
        
//         for(int i = 0; i <nums.size()-2; i++){
//             int j = i+1;
//             int k = nums.size() - 1;
            
//             int smallestloopdiff = mod(target - nums[i]+nums[j]+nums[k]);
//             int loopsum = nums[i]+nums[j]+nums[k];
            
//             while(j < k){
//                 if( mod(nums[i]+nums[j]+nums[k]-target) > smallestloopdiff ) break;
//                 smallestloopdiff = mod(nums[i]+nums[j]+nums[k]-target);
//                 loopsum = nums[i]+nums[j]+nums[k];
//                 j++;
//                 k--;
//             }
            
//             if(smallestloopdiff <= smallestdiff){
//                 ans = loopsum;
//                 smallestdiff = smallestloopdiff;
//             }
//         }
        return ans;
    }
};
