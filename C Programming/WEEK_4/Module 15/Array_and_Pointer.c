
#include <stdio.h>
int main(){
    int ar[5]={10,20,30,40,50};
    printf("0th index value : %d\n",ar[0]);
    printf("0th index value : %d\n",*ar);
    printf("1th index value : %d\n",ar[1]);
    printf("1th index value : %d\n",*(ar+1));
    printf("2th index value : %d\n",ar[2]);
    printf("2th index value : %d\n",*(ar+2));
    printf("3th index value : %d\n",ar[3]);
    printf("3th index value : %d\n",*(ar+3));
    printf("4th index value : %d\n",ar[4]);
    printf("4th index value : %d\n",*(ar+4));   

    printf("\n \n");

    printf("%d\n",*(ar+1));
    printf("%d\n",*(1+ar));
    printf("%d\n",ar[1]);
    printf("%d\n",1[ar]);
    return 0;
}