
#include <string.h>
#include <stdio.h>
int main(){
    char a[100001];
    scanf("%s",a);
    int sum=0;
    for(int i=0; i<strlen(a); i++){
         sum = sum + (a[i]-'0');
    }
    printf("%d",sum);
    return 0;
}