/*Given a number N. Print factorial of N.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 20).

Output
Print the factorial of the number N.

Example
input
5
output
120*/

/*#include <stdio.h>
int main(){
   int fact=1,n,i;
   scanf("%d",&n);
   for(i=1; i<=n; i++){
      fact = fact * i;
   }
   printf("%d",fact);
   return 0;
}*/

#include <stdio.h>
long long int fun(long long int n){
    if(n==0){
        return 1;
    }
    long long int ans = fun(n-1);
    return ans*n;
}
int main(){
   long long int n;
   scanf("%lld",&n);
   long long int ans = fun(n);
   printf("%lld",ans);
   return 0;
}