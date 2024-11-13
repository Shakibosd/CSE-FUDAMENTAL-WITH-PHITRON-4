//15. Time complexity = O(logxn).
void fun(int n, int x)
{
    for (int i = 1; i < n; i = i * x) //or for(int i = n; i >=1; i = i / x)
        cout << "Phitron";
}
