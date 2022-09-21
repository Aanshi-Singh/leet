class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        if(nums.size()==0) return 0;
        for(int num : nums){
            st.insert(num);
        }
        int max_count = 0;
        for(int num:nums){
            if(!st.count(num-1)){
                int curr = num;
                int count = 1;
                
                while(st.count(curr+1)){
                    count++;
                    curr +=1;
                }
                max_count = max(count, max_count);
            }
            
        };
        return max_count;
    }
};