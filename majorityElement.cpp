// leetcode #169
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int target;
        int size = nums.size();
        
        if(size % 2 == 0){
            target = size/2;
        }else{
            target = (size-1)/2;
        }
        
        unordered_map <int, int> m;
        
        for(int i = 0; i < size; i++){
            m[ nums[i] ]++;
            if(m[ nums[i] ] > target){
                return nums[i];
            }
        }
        return -1;
    }
};
