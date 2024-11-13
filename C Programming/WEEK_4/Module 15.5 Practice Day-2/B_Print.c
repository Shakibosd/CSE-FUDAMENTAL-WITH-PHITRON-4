/*Given a number N. Print all numbers from 1 to N.
Note: Solve this problem using function.
Input
Only one line contains a number N (1 ≤ N ≤ 103).
Output
print numbers form 1 to N separated by a single space.
Example
input
5
output
1 2 3 4 5
Note
Don't use any leading or trilling spaces.*/

#include <stdio.h>
int bfun(int n){
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("%d",i);
        if(i<n){
            printf(" ");
        }
    }
    return bfun;
}
int main(){
    bfun(5);
    return 0;
}
