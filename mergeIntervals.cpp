// leetcode #56
class Solution {
public:
    vector <vector<int>> merge(vector<vector<int>>& intervals) {
        vector <vector <int> > output;
        int size = intervals.size();
        if(size <= 1) return intervals;
        sort(intervals.begin(), intervals.end());
        
        for(auto it = intervals.begin(); it != intervals.end();){
            int lb = (*it)[0];
            int ub = (*it)[1];
            while(it != intervals.end() and (*it)[0] <= ub){
                ub = max( (*it)[1], ub );
                it++;
            }
            output.push_back({lb, ub});
        }
        return output;
    }
};
