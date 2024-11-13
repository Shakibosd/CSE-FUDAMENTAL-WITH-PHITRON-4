/*Given two numbers X and N. Print the result of the following equation:

S = (X0 - 1) + (X2) + (X4) + (X6) + ............... + (XN)

Note: Solve this problem using function and don't use built-in function.

Input
Only one line contains two numbers X and N (0 ≤ X, N ≤ 10)

Output
Print the equation result S.

Example
input
5 5
output
650
Note
First Test :
(5^0 - 1) + 5^2 + 5^4 = 0 + 25 + 625 = 650.*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    long long int sum=0;
    cin>>a>>b;
    for(int i=2; i<=b; i=i+2){
        long long int power=  pow(a,i);
        sum+=power;
    }
    cout<<sum<<endl;
    return 0;
}
