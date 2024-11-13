
#include <stdio.h>
int main(){
    int x=100;
    int * ptr =&x;//x -> *ptr same
    *ptr=200;//pointer deRefarense korte pare
    printf("x er value : %d\n",x);
    printf("x er value : %d\n",*ptr);
    return 0;
}