

// 1-n Even Odd Program
#include<stdio.h>
int main(){
    int i, n;
    printf("Enter Any Integer : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        if(i%2 == 0){
            printf("Even -> %d\n",i);
        }
        else{
            printf("Odd -> %d\n",i);
        }
    }

    return 0;
}













