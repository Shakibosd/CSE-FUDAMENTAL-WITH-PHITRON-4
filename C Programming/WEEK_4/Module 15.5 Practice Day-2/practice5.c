/*Write a function named swap_it() which will receive addresses of two integer variables. That means you need to receive them as integer pointers in the function parameter. In the function you need to swap the values of each other, you know that you can access the values of them by using dereferencing. You don’t need to return anything. After the function calls print the values of those two variables in the main function and see if anything happens!
Sample Input
Sample Output
10 20
20 10*/

/*#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a ,&b);
    int temp = a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
    return 0;
}*/


#include <stdio.h>
void fun(void){
    int a,b;
    scanf("%d %d",&a ,&b);
    int temp = a;
    a=b;
    b=temp;
    printf("%d %d",a,b); 
}
int main(){
    fun();
    return 0;
}