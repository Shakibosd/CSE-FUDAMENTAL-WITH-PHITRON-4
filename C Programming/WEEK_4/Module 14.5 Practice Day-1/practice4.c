/*a:A z:Z q:Q*/

/*ASCII Value = A-Z: 65-90 && a-z: 97-122*/

#include <stdio.h>
#include <string.h>
int main(){
   char n;
   scanf("%c",&n);
   if(n>='a' && n<='z'){
      int ans = n-32;
      printf("%c",ans);
   }   
   return 0;
}

/*#include <stdio.h>
int small_to_capital(char n){
    scanf("%c",&n);
    if(n>='a' && n<='z'){
        int ans = n-32;
        printf("%c\n",ans);
    }
    return small_to_capital;
}
int main(){
    int s = small_to_capital(s);
  
    return 0;
}*/