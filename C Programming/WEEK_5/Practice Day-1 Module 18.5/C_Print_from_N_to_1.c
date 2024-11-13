/*Given a number N. Print all numbers from N to 1 separated by a single space.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print from N to 1 separated by a single space.

Example
input
4
output
4 3 2 1
Note
Make sure don't print any leading or trailing spaces.

*/
#include <stdio.h>
void fun(int i, int n){
    if(i==n-1)return;
    printf("%d",i);
    if(i>n){
        printf(" ");
    }
    fun(i-1,n);
}
int main(){
   int n;
   scanf("%d",&n);
   fun(n,1);
   return 0;
}