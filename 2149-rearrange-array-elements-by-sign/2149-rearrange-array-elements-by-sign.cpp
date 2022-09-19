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
        int n1 = pos.size(), n2 = neg.size(), i= 0, j = 0,k=0;
        while(i<n1 && j<n2){
            nums[k] = pos[i++];
            nums[++k] = neg[j++];
            k++;
        }
        while(n2>j){
            nums[k] = neg[j++];
            
        }
        while(n1>i){
            nums[k] = pos[i++];
        }
        return nums;
    }
};