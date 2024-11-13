
//Write a program user input two number sum in function no return type
#include <stdio.h>
//user difine function
void sum(int a, int b){ //no return type
    //addition & print
    int s = a + b;
    printf("%d",s); 
}
//main function
int main(){
    //user input & function call
    int a,b;
    scanf("%d %d",&a ,&b);
    sum(a,b);
    return 0;
}