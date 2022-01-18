// leetcode #560
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
// //         brute force on2, on
//         int n = nums.size();
//         int sum = 0;
//         int output = 0;
//         int *leftsum = new int[n];
        
//         for(int i = 0; i <n; i++){
//             sum = sum + nums[i];
//             leftsum[i] = sum;
//         }
        
//         for(int i = 0; i <n; i++){
//             for(int j = i; j < n; j++){
//                 if(i == 0){
//                     if(leftsum[j] == k){
//                         output++;
//                     }
//                     continue;
//                 }
//                 if(leftsum[j] - leftsum[i-1] == k){
//                     output++;
//                 }
//             }
//         }
//         return output;
        int n = nums.size();
        map <int, int> m;
        m[0] = 1;
        int output = 0;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            auto it = m.find(sum-k);
            if(it != m.end()){
                output += it->second;
            }
            
            m[sum]++;
        }
        return output;
    }
};
