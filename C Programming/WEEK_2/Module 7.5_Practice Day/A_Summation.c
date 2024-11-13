/*Given a number N and an array A of N numbers. Print the absolute summation of these numbers.

absolute value : means to remove any negative sign in front of a number .

EX : |-5| = 5 , |7| = 7

Input
First line contains a number N (1 ≤ N ≤ 105) number of elements.

Second line contains N numbers (-109  ≤  Ai  ≤  109).

Output
Print the absolute summation of these numbers.

Examples
input
4
7 2 1 3
output
13
input
3
-1 2 -3
output
2
Note
Second Example :

-1 + 2 + -3 = -2 and it absolute is 2 so the answer is 2.*/

#include <stdio.h>
#include <string.h>
int main(){
    int n, i;
    scanf("%d",&n);
    int a[n];
    long long int sum = 0;
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    if(sum < 0){
        sum = sum * -1;
    }
    printf("%lld\n",sum);
    return 0;
}
