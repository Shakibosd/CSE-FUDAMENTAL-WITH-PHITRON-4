/*Given a number N and an array A of N numbers. Print the summation of the array elements.

Note: Solve this problem using recursion.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

Output
Print the summation of the N numbers.

Examples
input
4
1 4 2 7
output
14
input
4
5 5 5 5
output
20
*/
#include <stdio.h>
long long int fun(long long int a[], int n, int i){
    if (i < 0)return 0;
    return a[i] + fun(a, n, i - 1);
}
int main(){
    long long int n;
    scanf("%lld",&n);
    long long int a[n];
    for(long long int i = 0; i < n; i++){
        scanf("%lld",&a[i]);
    }
    long long int sum = fun(a, n, n - 1); 
    printf("%lld",sum);
    return 0;
}




