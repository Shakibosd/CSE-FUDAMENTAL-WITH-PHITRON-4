
/*Given a string S. Print the origin string after replacing the following:

Replace every comma character ',' with a space character.
Replace every capital character in S with its respective small character and Vice Versa.
Input
Only one line contains a string S (1 ≤ |S| ≤ 105) where |S| is the length of the string and it consists of lower and upper English letters and comma character ','.

Output
Print the string after the conversion.

Example
input
happy,NewYear,enjoy
output
HAPPY nEWyEAR ENJOY*/
#include <stdio.h>
#include <string.h>
int main(){
    char c[101], i;
    scanf("%s",c);
    int len = strlen(c);
    for(i=0; i<len; i++){
        if(c[i]==','){
            c[i]==' ';
        }
        else if(c[i]>='a' && c[i]<='z'){
            c[i] = c[i] - 32;
        }
        else if(c[i]>='A' && c[i]<='Z'){
            c[i] = c[i] + 32;
        }
    }
    printf("%s",c);
    return 0;
}

