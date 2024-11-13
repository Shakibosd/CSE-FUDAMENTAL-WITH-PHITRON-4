//The function is terminated by return with the base case
//5 4 3 2 1 print 
//recursion calling first in revers 1 2 3 4 5 

#include <stdio.h>
void fun(int i){
    if(i==0)return;
    //fun(i-1);
    printf("%d\n",i);
    fun(i-1);
}
int main(){
   fun(5);
   return 0;
}

