/*You are given an array a
 of n
 integers, and an integer k
You can choose at most k
 elements and get their summation.

What is the maximum summation you can get?

Input
The first line contains two integers n
 and k(1≤k≤n≤103)
 the number of elements in the array a
 and the maximum elements you can choose respectively.

The second line contains n
 integers ai(−109≤ai≤109)
 the elements of the array a
.

Output
Output the maximum summation you can get.

Examples
input
2 2
1 2
output
3
input
2 1
1 2
output
2
input
3 3
1 2 3
output
6*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
    int n, k;
    scanf("%d %d",&n ,&k);
    int a[n+1];
    for(int i=0; i<n; i++){
      scanf("%d",&a[i]);
    }
    for(int i=0; i<n-1; i++){
      for(int j=i+1; j<n; j++){
         if(a[i]<a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }
    }
    long long int sum=0;
    for(int i=0; i<k; i++){
      if(a[i]>0){
         sum = sum + a[i];
         continue;
      }
    }
    printf("%lld",sum);
    getch();
    return 0;
}
