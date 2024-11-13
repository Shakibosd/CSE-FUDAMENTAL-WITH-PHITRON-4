
#include <stdio.h>
void funk(int *p){
    *p=500;
}
int main(){
    int x = 100;
    funk(&x);
    printf("%d\n",x);
    return 0;
}
