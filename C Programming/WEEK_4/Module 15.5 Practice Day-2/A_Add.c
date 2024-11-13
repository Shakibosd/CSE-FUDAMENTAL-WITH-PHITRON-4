/*Given two numbers X and Y, Print their summation.
Note: Solve this problem using function.
Input
Only one line contains two numbers X and Y (0 ≤ X, Y ≤ 105).
Output
Print the summation value.
Example
input
5 2
output
7*/

#include <stdio.h>
#include <string.h>
int main(){
   int a, b, sum=0;
   scanf("%d %d",&a ,&b);
   sum = a + b;
   printf("%d",sum);
   return 0;
}



/*#include <stdio.h>
int add(int a, int b){
    scanf("%d %d",&a ,&b);
    int sum = a + b;
    return sum;
}
int main(){
    printf("%d\n",add(5,2));
    return 0;
}*/