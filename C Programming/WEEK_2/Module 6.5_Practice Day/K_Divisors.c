
/*Given a number N. Print all the divisors of N in ascending order.

Input
Only one line containing a number N (1 ≤ N ≤ 104).

Output
Print all positive divisors of N, one number per line.

Examples
input
6
output
1
2
3
6
input
7
output
1
7
input
4
output
1
2
4
Note
Divisor of Number is A number that divides the integer exactly (no remainder).

In other words the division works perfectly with no fractions or remainders involved.

Examples:

3 is a divisor of 12, because 12 ÷ 3 = 4 exactly
4 is a divisor of 12, because 12 ÷ 4 = 3 exactly.
5 is not a divisor of 12, because 12 ÷ 5 = 2 with a remainder of 2.
a divisor is also a factor of the original integer.*/

/*#include <stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        if(n%i == 0){
            printf("%d \n",i);
        }
    }
    return 0;
}*/
#include <stdio.h>
#include <string.h>
int main(){
    int n, i;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        if(n%i == 0){
            printf("%d\n",i);
        }
    }
    return 0;
}
