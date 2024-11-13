
#include <stdio.h>
#include <string.h>
int main(){
    // Logic program
    char a[100], b[100];
    scanf("%s %s",a ,b);
    int k = strlen(a);
    for(int i=0; i<=strlen(b); i++){
        a[k]=b[i];
        k++;
    }
    printf("%s %s",a ,b);


    printf("\n\n");

    // Function Program
    char c[101], d[101];
    scanf("%s %s",c ,d);
    strcat(c,d);
    printf("%s %s",c ,d);


    printf("\n\n");
    
    // Half string concat Program
    char x[200], y[200];
    scanf("%s %s",x ,y);
    int m = strlen(x);
    for(int i=0; i<=2; i++){
        x[m]=y[i];
        m++;
    }
    x[m]='\0';
    printf("%s %s",x ,y);
    return 0;
}