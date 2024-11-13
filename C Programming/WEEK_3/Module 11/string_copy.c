
#include <stdio.h>
#include <string.h>
int main(){
    char a[100], b[100];
    scanf("%s %s",a ,b);
    for(int i=0; i<=strlen(b); i++){
        a[i]=b[i];
    }
    printf("%s %s",a ,b);
    
    printf("\n \n");

    char c[101], d[101];
    scanf("%s %s",c ,d);
    strcpy(c,d);
    printf("%s %s",c ,d);
    return 0;
}