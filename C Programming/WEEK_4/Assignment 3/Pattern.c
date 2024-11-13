/*
   #
  ---
 #####
-------
 #####
  ---
   #
*/
#include <stdio.h>
#include <string.h>
int main(){
    int n, s, k, i, j;
    scanf("%d",&n);
    k=1;
    s=n-1;
    for(i=1; i<=(n*2)-(1); i++){
      for(j=1; j<=s; j++){
         printf(" ");
      }
      for(j=1; j<=k; j++){
          if(i%2==0){
            printf("-");
          }
          else{
            printf("*");
          }
      }
      if(i<=n-1){
        s--;
        k=k+2;
      }
      else{
        s++;
        k=k-2;
      }
      printf("\n");
   }
    return 0;
}
