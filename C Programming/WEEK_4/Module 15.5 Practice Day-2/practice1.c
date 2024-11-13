/*Write a function named my_abs() that receives an integer value as parameter and returns the absolute value of that. Absolute value means if the value is negative it will be converted to positive value. Then print the value in the main function.
Sample Input
Sample Output
5
5

-7
7*/

#include <stdio.h>
#include <string.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num > 0){
        printf("%d\n",num);
    }
    else if(num < 0){
        printf("%d\n",num*-1);
    }
    return 0;
}




/*#include <stdio.h>
void fun(void){
    int num;
    scanf("%d", &num);
    if (num>0){
        printf("%d\n", num);
    }
    else if(num<0){
        printf("%d\n", num*-1);
    }
}
int main(){
    fun();
    return 0;
}*/