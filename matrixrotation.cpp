// leetcode #48 
class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int l = m[0].size();
        
        for(int i = 0; i < l/2; i++){
            int p = i;
            int q = i;
            int r = l - 1 - i;
            int s = l - 1 - i;
            while(p < l - i - 1){
                int temp1  = m[q][l-i-1];
                m[q][l-i-1] = m[i][p];
                
                int temp2 = m[l-i-1][r];
                m[l-i-1][r] = temp1;
                
                int temp3 = m[s][i];
                m[s][i] = temp2;
                
                m[i][p] = temp3;
                p++;
                q++;
                r--;
                s--;
            }
        }
    }
};
