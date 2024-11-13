
#include <stdio.h>
int main(){
    int x=10; 
    int*p=&x;
    *p=200;
    printf("%d\n",x);
    return 0;
}