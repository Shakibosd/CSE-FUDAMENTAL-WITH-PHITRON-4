//17.Time complexity = O(nlogn).

void fun(int n)
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j = j + i)
            cout << "Phitron";
}
