/*  
   1
  21
 321
4321
*/

#include<stdio.h>
#include<string.h>
int main(){
    int n, i, j, s, k;
    scanf("%d",&n);
    k=1;
    s=n-1;
    for(i=1; i<=n; i++){
      for(j=1; j<=n-i; j++){
         printf(" ");
      }
      for(k=i; k>=1; k--){
         printf("%d",k);
      }
      s--;
      k++;
      printf("\n");
    }
    return 0;
}



