
#include <stdio.h>
int fun(char ar[], int i){
   if(ar[i]=='\0')return;
   int l = fun(ar,i+1);
   return l+1;
}
int main(){
   char ar[6]="Hello";
   int len = fun(ar,0);
   printf("%d\n",len);
   return 0;
}