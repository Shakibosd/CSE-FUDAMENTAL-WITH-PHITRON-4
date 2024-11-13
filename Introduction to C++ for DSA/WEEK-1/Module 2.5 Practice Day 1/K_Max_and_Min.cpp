/*Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

Input
Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

Output
Print the minimum number followed by a single space then print the maximum number.

Examples
input
1 2 3
output
1 3
input
-1 -2 -3
output
-3 -1
input
10 20 -5
output
-5 20*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin>>a >>b >>c;
    int mn, mx;
    mn = min({a,b,c});
    mx = max({a,b,c});
    cout<<mn<<" "<<mx<<endl;
    return 0;
}

