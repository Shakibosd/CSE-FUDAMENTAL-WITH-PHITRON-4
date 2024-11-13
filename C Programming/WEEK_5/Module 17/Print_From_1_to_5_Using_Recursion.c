//The function is terminated by return with the base case
//1 2 3 4 5 print 
// recursion calling first in reverse 5 4 3 2 1


#include <stdio.h>
void fun(int i){
   if(i==6)return;
   //fun(i+1);
   printf("%d\n",i);
   fun(i+1);
}
int main(){
   fun(1);
   return 0;
}