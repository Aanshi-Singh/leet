class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }
        int k = 0; int l = 0;
        for(int i = 0; i< n; i++){
            if(i%2==0){
                nums[i] = pos[k++];
            }
            else nums[i]=neg[l++];
        }
        return nums;
    }
};