
//write a program two number sum using function
#include <stdio.h>
//user difine function
int sum(int a, int b){
    int sum = a + b;
    return sum;
}
//main function
int main(){
    //print & function call
    printf("%d\n",sum(10,20));  
    printf("%d\n",sum(100,20));  
    return 0;
}