class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        if(n == 1) return;
        for(int j = 1; j<n; j++){
            if(nums[i] == 0 && nums[j]!=0){
                swap(nums[i], nums[j]);
                i++;
            }
            if(nums[i]!=0) i++;
        }
    }
};