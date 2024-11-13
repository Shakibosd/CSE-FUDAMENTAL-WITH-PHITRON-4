
// Nastade Conditional Statement
#include<stdio.h>
int main(){
     int tk;
     printf("Enter Any Integer Number : ");
     scanf("%d",&tk);

     if(tk >= 5000){
        printf("Ami Cox's Bazar Jabo\n");
        if(tk >= 10000){
            printf("Ami Saint Martin Jabo\n");
        }
        else{
            printf("Ferot Colo Jabo\n");
        }
    }
    else{
        printf("Kunu Jaygay Jabo Na\n");
    }
    return 0;
}

 