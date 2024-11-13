//19.O(log squre2 N)
void fun(int n)
{
    int i = 1;
    while (i < n) {
        int j = n;
        while (j > 0) {
            j = j / 2;
        }
        i = i * 2;
    }
}
