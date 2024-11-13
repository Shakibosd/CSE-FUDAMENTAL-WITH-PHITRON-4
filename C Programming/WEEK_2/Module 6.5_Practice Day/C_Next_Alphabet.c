
/*A number of two digits is lucky if one of its digits is divisible by the other.

For example, 39, 82, and 55 are lucky, while 79 and 43 are not.

Given a number between 10 and 99, determine whether it is lucky or not.

Input
Only one line containing a single number N
 (10≤N≤99).
Output
Print "YES" if the given number is lucky, otherwise print "NO".

Examples
input
39
output
YES
input
64
output
NO*/

#include <stdio.h>
#include <string.h>
int main(){
    while(1){
    char n, i, next;
    scanf("%c",&n);
    if(n=='z'){
        printf("a\n");
    }
    else if(n=='Z'){
        printf("A\n");
    }
    else{
        if(n>='a' && n<='z' || n>='A' && n<='Z'){
            next = n + 1;
            printf("%c\n",next);
        }
    }
    }
    return 0;
}

