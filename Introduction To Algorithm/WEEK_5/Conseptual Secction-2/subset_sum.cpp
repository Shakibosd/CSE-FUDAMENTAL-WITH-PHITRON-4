#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool check_sum(int n, int target, vector<int> &arr, vector<vector<int>> &dp)
    {
        // handle base case
        if (n == 0)
        {
            if (target == 0)
            {
                return true;
            }
            return false;
        }
        // check pre calculated value
        if (dp[n][target] != -1)
        {
            return dp[n][target];
        }
        // calculation
        if (arr[n - 1] <= target)
        {
            int pick = check_sum(n - 1, target - arr[n - 1], arr, dp);
            int no_pick = check_sum(n - 1, target, arr, dp);
            return dp[n][target] = pick || no_pick;
        }
        else
        {
            int no_pick = check_sum(n - 1, target, arr, dp);
            return dp[n][target] = no_pick;
        }
    }
    bool isSubsetSum(vector<int> arr, int sum)
    {
        // code here
        int n = arr.size();
        vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, 0));
        // handle base case
        dp[0][0] = true;
        for (int i = 1; i <= sum; i++)
        {
            dp[0][i] = false;
        }
        // calculation
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= sum; j++)
            {
                if (arr[i - 1] <= j)
                {
                    // int pick = check_sum(n-1, target-arr[n-1], arr, dp);
                    int pick = dp[i - 1][j - arr[i - 1]];
                    // int no_pick = check_sum(n-1, target, arr, dp);
                    int no_pick = dp[i - 1][j];
                    dp[i][j] = pick || no_pick;
                }
                else
                {
                    //  int no_pick = check_sum(n-1, target, arr, dp);
                    int no_pick = dp[i - 1][j];
                    dp[i][j] = no_pick;
                }
            }
        }
        return dp[n][sum];
    }
};