
/*Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.
Input
Only one line containing three numbers A, B, C ( - 106  ≤  A, B, C  ≤  106)
Output
Print the values in ascending order followed by a blank line and then the values in the sequence as they were read.
Examples
input
3 -2 1
output
-2
1
3

3
-2
1
input
-2 10 0
output
-2
0
10

-2
10
0*/

#include <stdio.h>
#include <string.h>
int main(){
    int a, b, c, temp;
    scanf("%d %d %d",&a ,&b ,&c);
    int ar[3]={a,b,c};
    if(a > b){
      temp = a;
      a = b;
      b = temp;
    }
    else if(b > c){
      temp = b;
      b = c;
      c = temp;
    }
    else if(a > b){
      temp = a;
      a = b;
      b = temp;
    }
    printf("%d\n%d\n%d\n",a ,b ,c);
    printf("\n");
    printf("%d\n%d\n%d",ar[0] ,ar[1] ,ar[2]);
    return 0;
}
