/*Timon has a
 candies and his friend, Pumbaa, has b
 candies, so Pumbaa asked Timon to tell him the value of a−b
. However, Timon will tell him the value of a−b
 if the value is ≥0
; otherwise, he will lie and say 0
. Since it was a hard task for Timon, he's asking for your help.

Given two numbers a
 and b
, find the answer.

Input
Only one line containing two numbers a,b
 (1≤a,b≤109
).

Output
Print the answer as specified in the statement.

Examples
inputCopy
9 1
outputCopy
8
inputCopy
1 9
outputCopy
0*/

#include <stdio.h>
#include <string.h>
int main(){
    int a, b, n;
    scanf("%d %d",&a ,&b);
    n = a - b;
    if(n < 0){
        n = 0;
    }
    printf("%d\n",n);
    return 0;
}

