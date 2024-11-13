
// Conditional Statement
#include<stdio.h>
int main(){
    while(1){
        int tk;
        printf("Enter Any Integer Number : ");
        scanf("%d",&tk);

        if(tk >= 100){
            printf("Ami Barger Khabo\n");
        }
        else if(tk >= 50){
            printf("Ami Fuska Khabo\n");
        }
        else if(tk >= 20){
            printf("Ami Ice Kream Khabo\n");
        }
        else{
            printf("Ami Kisu Khabo Na\n");
        }
     }
        
    return 0;
}

