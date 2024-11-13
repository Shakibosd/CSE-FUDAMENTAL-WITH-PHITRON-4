
//infinity loop
#include <stdio.h>
void fun(void){
   printf("Fun\n");
   fun();
}
int main(){
   fun();
   return 0;
}