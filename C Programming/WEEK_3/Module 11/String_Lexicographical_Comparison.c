

#include <string.h>
#include <stdio.h>
int main(){
    //User input
    /*
    char a[100], b[100];
    scanf("%s %s",a ,b);
    int i=0;
    while(1){
        //Null Case
        if(a[i]=='\0' && b[i]=='\0'){
            printf("String Are Equal!\n");
            break;
        }
        else if(a[i]=='\0'){
            printf("String A Small!\n");
            break;
        }
        else if(b[i]=='\0'){
            printf("String B Small!\n");
            break;
        }
        //comparison
        if(a[i]=b[i]){
            i++;
        }
        else if(a[i]<b[i]){
            printf("String A Small!\n");
            break;
        }
        else{
            printf("String B Small!\n");
            break;
        }
    }
*/

    printf("\n\n");
    // Biltin Function use program
    while(1){
        char c[200], d[200];
        scanf("%s %s",c ,d);
        int v = strcmp(c, d);
        printf("%d",v);
        if(v<0){
            printf(" String A Small!\n");
        }
        else if(v>0){
            printf(" String B Small!\n");
        }
        else{
            printf(" String Are Equal!\n");
        }
    }
    return 0;
}