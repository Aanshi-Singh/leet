class Solution {
public:
    int paths(int m, int n, int i, int j, vector<vector<int>> &dp){
        
        if(i>=n || j>=m){
            return 0;
        }

        if(i == (n-1) && j==(m-1)){
            // cout<<1;
            return 1;
        }
        
        if(dp[i][j]!= -1)
        {cout<<dp[i][j];
            return dp[i][j];}
        else{
        
            dp[i][j] = paths(m , n, (i+1), j,dp)+paths(m, n, i, j+1,dp);
            return dp[i][j];
        }
    }
    int uniquePaths(int m, int n) {
            vector <vector <int>> dp(n, vector<int> (m, -1));

        return paths(m, n, 0, 0, dp);
    }
};