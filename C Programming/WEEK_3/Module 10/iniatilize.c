
#include <stdio.h>
int main(){
    // String Print
    char a[6]={'s','h','a','k','i','b'};
    for(int i=0; i<6; i++){
        printf("%c\n",a[i]);
    }

    printf("\n\n");

    char b[6]="Shakib";
    for(int i=0; i<6; i++){
        printf("%c\n",b[i]);
    }

    printf("\n\n");
   
    char d[]="Shakib";
    int sz=sizeof(d)/sizeof(char);
    printf("%d\n",sz);
    printf("%s\n",d);
    return 0;
}