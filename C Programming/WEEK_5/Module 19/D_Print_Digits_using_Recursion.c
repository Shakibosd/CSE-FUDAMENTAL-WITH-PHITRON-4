/*Given a number N. Print the digits of N separated by a space.

Note: Solve this problem using recursion.

Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 109).

Output
For each test case print a single line contains the digits of the number separated by space.

Example
input
3
121
39
123456
output
1 2 1 
3 9 
1 2 3 4 5 6*/

#include <stdio.h>
void fun(int n){
   if(n==0)return;
   int x = n%10;
   fun(n/10);
   printf("%d ",x);
}
int main(){
   int t;
   scanf("%d",&t);
   for(int i=0; i<t; i++){
      int n;
      scanf("%d",&n);
      fun(n);
      if(n==0){
        printf("0");
      }
      printf("\n");
   }
   return 0;
}
