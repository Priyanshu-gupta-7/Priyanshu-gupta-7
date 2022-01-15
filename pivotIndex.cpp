// leetcode #724 
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
//         creating leftsum and rightsum arrays
        int size = nums.size();
        int ans = -1;
        if(size <= 1) return 0;
        
        int sumofarray = 0;
        
        for(int i = 0; i< size; i++){
            sumofarray += nums[i];
        }
//      calculating total sum and calculating leftsum for each index, performing check and returning instantly 
        int leftsum = 0;
        int rightsum = sumofarray;
        for(int i = 0; i < size; i++){
            rightsum -= nums[i];
            if(leftsum == rightsum){
                return i;
            }
            leftsum += nums[i];
        }
        return ans;
    }
};
