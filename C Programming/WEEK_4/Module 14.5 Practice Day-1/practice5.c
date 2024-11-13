/*ASCII Value = A-Z: 65-90 && a-z: 97-122*/
//a:A b:B
#include <stdio.h>
#include <string.h>
int main(){
   char n;
   scanf("%c",&n);
   if(n>='A' && n<='Z'){
      int ans = n+32;
      printf("%c",ans);
   }   
   return 0;
}

/*#include <stdio.h>
int capital_to_small(char n){
    scanf("%c",&n);
    if(n>='A' && n<='Z'){
        int ans = n+32;
        printf("%c\n",ans);
    }
    return capital_to_small;
}
int main(){
    int x = capital_to_small(x);
    return 0;
}*/