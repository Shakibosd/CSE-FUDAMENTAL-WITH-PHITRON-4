//12. Time complexity = O(1) in best case and O(n) in worst case.
void fun(int n)
{
    if (n < 5)
        cout << "Phitron";
    else {
        for (int i = 0; i < n; i++) {
            cout << i;
        }
    }
}
