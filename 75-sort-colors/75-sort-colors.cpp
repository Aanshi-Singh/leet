class Solution {
public:
    void sortColors(vector<int>& nums) {
        int twos = 0, ones = 0, zeros = 0;
        for(int i = 0; i< nums.size(); i++){
            switch(nums[i]){
                    case(1):
                    ones+=1;
                    break;
                    
                    case(2):
                    twos+=1;
                    break;
                    
                    case(0):
                    zeros+=1;
                    break;
            }
            
        }
       int i; 
        for( i= 0; i<zeros; i++){
            nums[i] = 0; 
        }
        for( i = zeros; i<ones+zeros; i++){
            nums[i] = 1; 
        }
        for(i = zeros +ones ; i<twos+ones+zeros; i++){
           nums[i] = 2; 
        }
        
    }
};