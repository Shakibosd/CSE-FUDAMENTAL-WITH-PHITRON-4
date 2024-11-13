/*Write a function named my_len() which receives a string as a parameter and then counts the length of that string and returns that count. Don’t use strlen() function to get the length of the string. After receiving that count in the main function print it.
Note: The string will not have any spaces.
Sample Input
Sample Output
hello
5*/


#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    scanf("%s",s);
    char len=0;
    for(char i=0; s[i]!='\0'; i++){
        len++;
    }
    printf("%d\n",len);
    return 0;
}



/*#include <stdio.h>
void fun(void){
    char str[100];
    int len=0;
    scanf("%s",str);
    for(int i=0; str[i]!='\0'; i++){
        len++;
    }
    printf("%d",len);
}
int main(){
    fun();
    return 0;
}*/