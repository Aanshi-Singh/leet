class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        set<int>s;
        for(auto x: nums){
            ans+=x;
            s.insert(x);  
        }
        int sum = 0;
        for(auto i : s){
            sum+=2*i;
        }
        return (sum-ans);
        
    }
};