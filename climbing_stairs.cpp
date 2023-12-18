class Solution {
public:
    int climbStairs(int n) {
        //Initialize dp
        vector <int> dp(50, - 1);
        //Base Cases
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        //Run a loop for rest of the cases
        for(int i = 3; i<= n; i++) {
          dp[i] = dp[i-1] + dp[i-2];
        }
        //Return result
        return dp[n];
    }
};
