//16. O(N2log2N) 
#include <iostream>
using namespace std;
 
void fun(int n)
{
    for (int i = 0; i < n / 2; i++)
        for (int j = 1; j + n / 2 <= n; j++)
            for (int k = 1; k <= n; k = k * 2)
                cout << "Phitron";
}
 
int main()
{
  int n=8;
  fun(3);
}
