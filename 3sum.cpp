// leetcode 15 medium
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int size = nums.size();
        
        vector<vector<int>> output;
        if(size<=2) return output;
        
        int target = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i <size; i++){
            int newtarget = target - nums[i];
            int f = i+1;
            int b = size-1;
            
            while(f < b){
                int sum = nums[f] + nums[b];
                if(sum < newtarget){
                    f++;
                }
                else if(sum > newtarget){
                    b--;
                }
                else{
                    vector <int> smalloutput;
                    smalloutput.push_back(nums[i]);
                    smalloutput.push_back(nums[f]);
                    smalloutput.push_back(nums[b]);
                    output.push_back(smalloutput);
                    
                    while(f < b and nums[f] == smalloutput[1]){
                        f++;
                    }
                    while(f < b and nums[b] == smalloutput[2]){
                        b--;
                    }
                }
                i++;
                while(i < size and nums[i] == nums[i-1]){
                    i++;
                }
                i--;
            }
        }
        return output;
    }
};
