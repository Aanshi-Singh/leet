class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int top = 0, r = matrix[0].size()-1, l = 0, bot = matrix.size()-1;
        int k = 0;
        while(top<=bot && r>=l){
            //first loop left to right
            for(int i = l; i<=r; i++){
               ans.push_back(matrix[top][i]);
            }
            top++;
            //top to bottom
            for(int i = top ; i<= bot; i++){
                ans.push_back(matrix[i][r]);
            }
            r--;
           
            if(top<=bot){
                for(int i = r; i>=l;i--){
                ans.push_back(matrix[bot][i]);
            } bot--;}
           
            if(l<=r){
                for(int i = bot; i>=top; i--){
                ans.push_back(matrix[i][l]);
                    
            }
                l++;
                
                    }
            
            
        }
        return ans;
    }
};