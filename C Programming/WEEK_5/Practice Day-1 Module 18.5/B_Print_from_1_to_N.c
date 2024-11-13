/*Given a number N. Print numbers from 1 to N in separate lines.
Note: Solve this problem using recursion.
Input
Only one line containing a number N (1 ≤ N ≤ 103).
Output
Print N lines according to the required above.
Example
input
5
output
1
2
3
4
5
*/
#include <stdio.h>
void fun(int i, int n){
    if(i==n+1)return;
    printf("%d\n",i);
    fun(i+1,n);
}
int main(){
   int n;
   scanf("%d",&n);
   fun(1,n);
   return 0;
}