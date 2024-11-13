
//call by value
#include <stdio.h>
void funk(int x){
    x = 13;
    //printf("funk er address : %p\n",&x);
}
int main(){
    int x = 10;
    funk(x);
    //printf("main er address : %p\n",&x);
    printf("main er value : %d\n",x);  
    return 0;
}

