/*The winter sale began, and Mrs. Sarah wants to buy a T-shirt for her son. The T-shirt has a ticket that indicates a discount of X%
and its price P
after the discount. She now wants to know the price before the discount to know if the discount was worthy. Help her!

Input
Only one line containing two numbers X
 and P
 (1≤X≤99,1≤P≤4×104)-the discount percentage, and the price of the T-shirt after the discount.

Output
Print the price of the T-shirt before the discount rounded up to two decimal places.

Examples
input
20 80
output
100.00
input
15 20
output
23.53*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
    float x, p, o;
    scanf("%f %f",&x ,&p);
    o = p/(1-(x/100));
    printf("%0.2f",o);

    getch();
    return 0;
}



