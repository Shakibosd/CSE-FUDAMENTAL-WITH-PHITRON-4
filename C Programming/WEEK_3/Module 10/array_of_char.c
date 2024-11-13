
#include<stdio.h>
int main(){
    //String User Input Print
    char ar[6];
    for(int i=0; i<6; i++){
        scanf("%c",&ar[i]);
    }
    for(int i=0; i<6; i++){
        printf("%c\n",ar[i]);
    }
    printf("\n");
    //String Size Print 
    int ar1[5];
    int sz = sizeof(ar1)/sizeof(int);
    char ar2[5];
    printf("%d\n",sizeof(ar1));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(ar2));
    printf("%d\n",sizeof(char));
    printf("%d\n",sz);
    return 0;
}


  