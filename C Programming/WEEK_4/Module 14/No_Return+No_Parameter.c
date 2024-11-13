
//write a program user input two number sum
#include <stdio.h>
//user difine function
void sum(void){//no parameter & no return type
    //user input & addition & print
    int a,b;
    scanf("%d %d",&a ,&b);
    int s = a + b;
    printf("%d\n",s);
}
//main function
int main(){
    //function call
    sum();

    return 0;
}