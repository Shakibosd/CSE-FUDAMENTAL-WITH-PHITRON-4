
#include <stdio.h>
#include <string.h>
void funk(char ar[]){
    printf("%d ",strlen(ar));
}
int main(){  
    char ar[6]="Hello";
    funk(ar);
    return 0;
}