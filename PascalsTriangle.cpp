// leetcode 118 
class Solution {
public:
    vector<vector<int>> generate(int numrows) {
        vector <vector <int> > output;
        if(numrows == 0) return output;
        if(numrows == 1){
            vector <int> v;
            v.push_back(1);
            output.push_back(v);
            return output;
        }
        if(numrows == 2){
            vector <int> v;
            v.push_back(1);
            output.push_back(v);
            vector <int> x;
            x.push_back(1);
            x.push_back(1);
            output.push_back(x);
            return output;
        }
            vector <int> v;
            v.push_back(1);
            output.push_back(v);
            vector <int> y;
            y.push_back(1);
            y.push_back(1);
            output.push_back(y);
        
        for(int i = 2; i < numrows; i++){
            vector <int> x;
            x.push_back(1);
            for(int j = 1; j < i; j++){
                x.push_back(output[i-1][j] + output[i-1][j-1]);
            }
            x.push_back(1);
            output.push_back(x);
        }
        return output;
    }
};
