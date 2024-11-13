
#include <stdio.h>
void world(void){
   printf("Wrold Start\n");
   printf("Wrold End\n");
}
void hello(void){
   printf("Hello Start\n");
   world();
   printf("Hello End\n");
}
int main(){
   printf("Main Start\n");
   hello();
   printf("Main End\n");
   return 0;
}