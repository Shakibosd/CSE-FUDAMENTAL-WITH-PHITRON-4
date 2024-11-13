
/*
****
***
**
*
*/

#include <stdio.h>
#include <string.h>
int main(){
    int n, k, s;
    scanf("%d",&n);
    k=n;
    s=n-1;
    for(int i=1; i<=n; i++){
       for(int j=1; j<=k; j++){
          printf("*");
       }
       k--;
       s++;
       printf("\n");
    }
    return 0;
}

