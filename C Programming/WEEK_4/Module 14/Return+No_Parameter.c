
//Write a program user input two number sum in function no parameter pass
#include <stdio.h>
//user difine function
int sum(void){//no paramiter pass
    //user input & addition
    int a, b;
    scanf("%d %d",&a ,&b);
    int sum = a + b;
    return sum;
}
//main function
int main(){
    //print & function call
    int s = sum();
    printf("%d",s);
    return 0;
}