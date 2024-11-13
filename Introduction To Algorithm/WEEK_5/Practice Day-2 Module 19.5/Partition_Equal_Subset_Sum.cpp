#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int dp[205][20005];
    bool check_sum(int n, int target, vector<int> &arr)
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
            int pick = check_sum(n - 1, target - arr[n - 1], arr);
            int no_pick = check_sum(n - 1, target, arr);
            return dp[n][target] = pick || no_pick;
        }
        else
        {
            int no_pick = check_sum(n - 1, target, arr);
            return dp[n][target] = no_pick;
        }
    }
    bool canPartition(vector<int> &nums)
    {
        int n = nums.size();
        int sum = 0;
        for (int x : nums)
        {
            sum += x;
        }
        if (sum % 2 == 1)
        {
            return false;
        }
        int target = sum / 2;
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= target; j++)
            {
                dp[i][j] = -1;
            }
        }
        return check_sum(n, target, nums);
    }
};