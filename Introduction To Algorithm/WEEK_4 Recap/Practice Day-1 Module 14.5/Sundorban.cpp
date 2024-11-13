
/*
The Problem
The Sundarbans mangrove forest, one of the largest such forests in the world (140,000 ha), lies on the delta of the Ganges, Brahmaputra and Meghna rivers on the Bay of Bengal. It is adjacent to the border of India’s Sundarbans World Heritage site inscribed in 1987.

Suppose you lost in a dense area of Sundorban and it is getting dark. There is at least one path that leads you to the city on the other side but you cannot see anything until you are right in front of it as the trees and bushes obscure the path.

Now find a way .Your goal is to go out of the jungle as fast as you can before it gets dark.

The Input
Input start with a number N and then the matrix of size N x N filled with S, E, T, and P which is our map. Map contains a single S representing the start point, and single E representing the endpoint and P representing the path and T representing the Tree. Input is terminated by EOF.

The Output
For each input set output single integer i.e. minimum number of moves from S to E.
Assumptions:
You can assume that the maps would be in square form and can be up to a maximum size of 30X30. You can move in four directions North East West South.
You can move in any direction when you find P but cannot move to a point where a T is present.
Sample Input
5
S P P P P
T P T P P
T P P P P
P T E T T
P T P T T
Sample Output
5
*/

#include <bits/stdc++.h>

#define ll long long
#define pi pair<int, int>

using namespace std;
const ll N = 50;
ll des[N][N];
ll vis[N][N];
char a[N][N];

vector<pi> d;
ll n;

ll valid(ll ci, ll cj)
{
    if (ci >= 0 && ci < n && cj >= 0 && cj < n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void bfs(ll si, ll sj)
{
    queue<pi> q;
    q.push({si, sj});
    des[si][sj] = 0;
    vis[si][sj] = 1;

    while (!q.empty())
    {
        pi p = q.front();
        q.pop();

        for (ll i = 0; i < 4; i++)
        {
            ll ci = p.first + d[i].first;
            ll cj = p.second + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] != 'T')
            {
                q.push({ci, cj});
                vis[ci][cj] = 1;
                des[ci][cj] = des[p.first][p.second] + 1;
            }
        }
    }
}

int main()
{
    d.push_back({0, 1});
    d.push_back({0, -1});
    d.push_back({-1, 0});
    d.push_back({1, 0});
    while (cin >> n)
    {
        ll si, sj, di, dj;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'S')
                {
                    si = i;
                    sj = j;
                }
                if (a[i][j] == 'E')
                {
                    di = i;
                    dj = j;
                }
            }
        }
        memset(vis, 0, sizeof(vis));
        memset(des, -1, sizeof(des));
        bfs(si, sj);
        ll ans = des[di][dj];
        cout << ans << endl;
    }
    return 0;
}
