class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = *max_element(nums.begin(), nums.end());
        vector<int> temp(n+1, 0);
        for(int i = 0; i<nums.size(); i++)
        {
           if(temp[nums[i]] == 1){
               return nums[i] ;
           } 
            else{
                temp[nums[i]] = 1;
            }
        }
        return 0;
    }
};