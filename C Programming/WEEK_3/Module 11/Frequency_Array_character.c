
#include <stdio.h>
#include <string.h>
int main(){
    //user input
    char s[100];
    scanf("%s",s);
    int count[26]={0};
    //value count
    for(int i=0; i<strlen(s); i++){
        int value=s[i]-'a';
        value[count]++;
    }
    //print
    for(int i=0; i<strlen(s); i++){
        int value=s[i]-97;
        if(count[value]!=0){
            printf("%c - %d\n",value+'a',count[value]);
        }
        count[value]=0;
    }
    return 0;
}