class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int max_ele = nums[0];
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
            max_ele = max(sum, max_ele);
            if(sum < 0){
                sum = 0;
            }
        }
        return max_ele;
    }
};