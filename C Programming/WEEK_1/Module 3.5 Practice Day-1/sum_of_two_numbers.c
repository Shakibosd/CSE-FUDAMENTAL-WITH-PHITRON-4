/*Problem Statement

Take two integers A and B as input and output their summation.

Input Format

You will be given A and B separated by a space.
Constraints

-10^9 <= A,B <= 10^9
Output Format

Output their summation
Sample Input 0

2 3
Sample Output 0

5
Sample Input 1

-10 5
Sample Output 1

-5*/
#include <stdio.h>
#include <string.h>
int main(){
    int number1, number2, summation;
    scanf("%d %d",&number1 ,&number2);
    summation = number1 + number2;
    printf("%d",summation);
    return 0;
}
