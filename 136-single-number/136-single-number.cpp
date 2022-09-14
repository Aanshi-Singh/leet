class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //a^a^b^b^c = c
        int ans = 0;
        for(auto x: nums){
            ans^=x;
        }
        return ans;
    }
};