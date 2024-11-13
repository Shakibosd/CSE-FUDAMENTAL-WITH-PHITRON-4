/*Given a number N
. Print "I love Recursion" N
 times.
Note: Solve this problem using recursion.
Input
Only one line containing a number N
 (1≤N≤100)
Output
Print "I love Recursion" N
 times.
Example
input
3
output
I love Recursion
I love Recursion
I love Recursion*/
#include <stdio.h>
void fun(int i, int n){
    if(i==n+1)return;
    printf("I love Recursion\n",i);
    fun(i+1,n);
}
int main(){
   int n;
   scanf("%d",&n);
   fun(1,n);
   return 0;
}