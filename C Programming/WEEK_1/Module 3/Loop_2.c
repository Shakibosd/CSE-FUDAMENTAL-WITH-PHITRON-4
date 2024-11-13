
#include<stdio.h>
int main(){
    // print 1-20 Number
    for(int i=1; i<=10; i++){
        printf("%d\n",i);
    }
    printf("\n \n");
    // 1-20 Even Number Print
    for(int i=2; i<=20; i=i+2){
        printf("%d\n",i);
    }
    printf("\n \n");
    // 1-20 Odd Number Print
    for(int i=1; i<=20; i=i+2){
        printf("%d\n",i);
    }
    printf("\n \n");
    // 20-1 Number Print
    for(int i=20; i>=1; i--){
        printf("%d\n",i);
    }
   
}