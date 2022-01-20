// leetcode 18 medium 
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector <vector <int> > output;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        if(n <=3) return output;
        
        for(int i = 0; i < n-3; i++){
            // if(nums[i]+nums[i+1]+nums[i+2]+nums[i+3] > target) continue;
            // if(nums[i]+nums[n-1]+nums[n-2]+nums[n-3] < target) continue;
            if(i > 0 and nums[i] == nums[i-1]) continue;
            
            for(int j = i+1; j < n-2; j++){
                if(j > i+1 and nums[j] == nums[j-1]) continue;
                if(nums[i]+nums[j]+nums[j+1]+nums[j+2] > target ) break;
                if(nums[i]+nums[j]+nums[n-1]+nums[n-2] < target) continue;
                
                int k = j+1;
                int l = n-1;
                while(k < l){
                    while(k < l and k > j+1 and nums[k] == nums[k-1]) k++;
                    while(k < l and l < n-1 and nums[l] == nums[l+1]) l--;
                    int sum = nums[i]+nums[j]+nums[k]+nums[l] ;
                    if(sum > target) l--;
                    else if(sum < target) k++;
                    else {
                        output.push_back( {nums[i],nums[j],nums[k],nums[l]} );
                        k++;
                        l--;
                    }
                }
            }
        }
        return output;
    }
};
