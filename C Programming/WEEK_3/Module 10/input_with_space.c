
#include <stdio.h>
#include <string.h>
int main(){
    // user input with gets function
    char ar[20];
    gets(ar);
    printf("%s",ar);
    
    // user input with fgets function
    printf("\n\n");
    char ar1[100];
    fgets(ar1,19,stdin);
    printf("%s",ar1);
    return 0;
}