/*Problem Statement

You've learned about variables, right? Now its time to practice them. You need to take an integer A, a very big integer B, a floating value C and a character D as input and output them serially.

Input Format

First line will contain A
Second line will contain B
Third line will contain C
Fourth line will contain D
Constraints

-10^9 <= A <= 10^9
-10^18 <= B <= 10^18
-10^9 <= C <= 10^9
Output Format

Output them serially and put a new line after each value. Output the floating value 2 points after decimal.
Sample Input 0

100
1234567891234567
23.5675
A
Sample Output 0

100
1234567891234567
23.57
A*/
#include <stdio.h>
#include <string.h>
int main(){
    int a;
    long long int b;
    float c;
    char e;
    scanf("%d\n%lld\n%f\n%c",&a ,&b ,&c ,&e);
    printf("%d\n%lld\n%0.2f\n%c",a ,b ,c, e);
    return 0;
}
