
/*Given a number N and an array A of N numbers. Print the maximum value in this array.
Note: Solve this problem using recursion.
Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.
Second line contains N numbers ( - 109 ≤ Ai ≤ 109).
Output
Print the maximum value in this array.
Example
input
5
1 -3 5 4 -6
output
5*/

#include <stdio.h>
#include <limits.h>
int fun(int a[], int n, int i){
   // base case 
   if(i==n)return INT_MIN;
   int max=fun(a,n,i+1);
   if(a[i] > max){
     return a[i];
   }
   else{
     return max;
   }
}
int main(){
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0; i<n; i++){
      scanf("%d",&a[i]);
   }
   int max = fun(a,n,0);
   printf("%d\n",max);
   return 0;
}