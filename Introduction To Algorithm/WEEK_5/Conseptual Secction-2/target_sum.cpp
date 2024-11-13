#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    map<pair<int, int>, int> dp;
    int target_sum(int n, int target, vector<int> &nums)
    {
        // base case
        if (n == 0)
        {
            if (target == 0)
            {
                return 1;
            }
            return 0;
        }
        // precalculated value
        if (dp.find({n, target}) != dp.end())
        {
            return dp[{n, target}];
        }
        // calculation
        int positive = target_sum(n - 1, target - nums[n - 1], nums);
        int negative = target_sum(n - 1, target + nums[n - 1], nums);

        return dp[{n, target}] = positive + negative;
    }
    int findTargetSumWays(vector<int> &nums, int target)
    {
        int n = nums.size();
        return target_sum(n, target, nums);
    }
};