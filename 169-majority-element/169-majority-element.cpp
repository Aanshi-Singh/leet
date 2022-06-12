class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int count = 0;
        sort(nums.begin(), nums.end());
        int ele = nums[0];
        for(auto i : nums){
            if(i == ele){
                count+=1;
                if(count>nums.size()/2)
                    return i;
            }
            else{
                ele = i;
                count = 1;
            }
        }
        return 0;
        
    }
};