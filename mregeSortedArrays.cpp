// leetcode #88 EASY 
class Solution {
public:
//   O(M+N), O(M+N)
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0){
            nums1 = nums2;
            return;
        }
        if(n==0){
            return;
        }
        int i = 0;
        int j = 0;
        
        vector <int> op;
        while(i < m and j < n){
            if(nums1[i] <= nums2[j]){
                op.push_back(nums1[i]);
                i++;
            }
            if(nums1[i] > nums2[j]){
                op.push_back(nums2[j]);
                j++;
            }
        }
        
        while(i < m){
            op.push_back(nums1[i]);
            i++;
        }
        while(j < n){
            op.push_back(nums2[j]);
            j++;
        }
        
        nums1 = op;
        return;
    }
};
