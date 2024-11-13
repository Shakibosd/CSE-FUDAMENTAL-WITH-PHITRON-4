
// 3 weay string length print
#include <string.h>
#include <stdio.h>
int main(){
    // string length for loop
    char a[100];
    scanf("%s",&a);
    int count = 0;
    for(int i=0; a[i]!='\0'; i++){
        count++;
    }
    printf("%d\n",count);
    printf("\n\n");


    // string length for loop
    char b[100];
    scanf("%s",&b);
    int sum = 0;
    int i=0;
    while(a[i]!='\0'){
        sum++;
        i++;
    }
    printf("%d",sum);
    printf("\n\n");



    // strlen function string length
    char d[100];
    scanf("%s",&d);
    int sz = strlen(d);
    printf("%d\n",sz);
    return 0;
}



