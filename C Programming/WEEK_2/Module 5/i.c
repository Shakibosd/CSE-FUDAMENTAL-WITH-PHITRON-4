
/*Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No".

Input
Only one line containing two numbers A and B (0  ≤  A, B  ≤  100).

Output
Print "Yes" or "No" according to the statement.*/

#include <stdio.h>
int main(){
    while(1){
        int a,b;
        scanf("%d %d",&a ,&b);
        if(a >= b){
            printf("YES\n");
        }
        else{
            printf("NO");
        }
    }
    return 0;
}