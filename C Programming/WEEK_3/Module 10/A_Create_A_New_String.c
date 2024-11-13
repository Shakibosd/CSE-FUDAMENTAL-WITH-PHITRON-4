
#include <string.h>
#include <stdio.h>
int main(){
    char s[1001],t[1001];
    scanf("%s %s",s ,t);
    int lnS=strlen(s);
    int lnT=strlen(t);
    printf("%d %d\n",lnS,lnT);
    printf("%s %s\n",s ,t);

    return 0;
}