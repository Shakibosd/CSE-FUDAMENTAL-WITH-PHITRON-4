//scope
#include <stdio.h>
//global variable
int x=500;
void fun(void){
    //local variabel
    //int s=100;
    //printf("%p\n",&s);
    printf("%d\n",x);
}
int main(){
    //local variable
    //int s=200;
    //printf("%p\n",&s);
    //printf("%d\n",x);
    //fun();
    for(int i=0; i<5; i++){
        int z=300;
        printf("%d\n",z);
    }
    return 0;
}