//Leetcode easy TWOSUM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
//         USING MAP: ON+OlogN * N
//         unordered_map <int,int> m;
//         vector<int> op;
//         for(int i=0; i < nums.size(); i++){
//             int n = nums[i];
//             int ncomp = target-n;
//             auto itn = m.find(n);
//             auto itncomp = m.find(ncomp);
//             if(itncomp !=m.end()){

//                 op.push_back(i);
//                 op.push_back(itncomp->second);
//                 return op;
//             }
//             m[n] = i;
//         }
//         return op;
        
//         USING VECTOR O(N2)
        vector<int> op;
        for(auto it = nums.begin(); it != nums.end(); it++){
            auto itncomp = find(it+1, nums.end(), target-*it);
            if(itncomp != nums.end()){
                op.push_back(it-nums.begin());
                op.push_back(itncomp - nums.begin());
                return op;
            }
        }
        return op;        
    }
};
