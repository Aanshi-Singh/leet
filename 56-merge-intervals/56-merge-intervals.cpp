class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector <vector<int>> mergeVector;
        
        if(intervals.size() == 0)
                return mergeVector;
        
        sort(intervals.begin(), intervals.end());
        
        vector<int> temp  = intervals[0];
        
        for(auto it : intervals){
            if(it[0]<=temp[1]){
                temp[1] = max(temp[1], it[1]);
            }
            else{
                mergeVector.push_back(temp);
                temp = it;
            }
        }
        
        mergeVector.push_back(temp);
        return mergeVector;
    }
};