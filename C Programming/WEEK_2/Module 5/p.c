
/*Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.

Input
Only one line containing a number X (999 < X  ≤  9999)

Output
If the first digit is even print "EVEN" otherwise print "ODD".*/




#include <stdio.h>
int main(){
    int a,ans;
    scanf("%d",&a);
    ans = a/1000;
    if(ans%2==0){
        printf("EVEN\n");
    }
    else{
        printf("ODD");
    }
    return 0;
}