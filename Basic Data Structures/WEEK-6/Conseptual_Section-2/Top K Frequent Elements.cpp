class cmp
{
public:
    bool operator()(pair<int, int> &a, pair<int, int> &b)
    {
        if (a.second == b.second)
        {
            return a.first < b.first;
        }
        return a.second < b.second;
    }
};
class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        map<int, int> mp;
        for (int x : nums)
        {
            mp[x]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
        for (auto x : mp)
        {
            pq.push(x);
        }
        vector<int> ans;
        while (k--)
        {
            ans.push_back(pq.top().first), pq.pop();
        }
        return ans;
    }
};