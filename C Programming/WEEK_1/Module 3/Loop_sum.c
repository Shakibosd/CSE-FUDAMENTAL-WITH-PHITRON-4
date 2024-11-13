
// User Input Series Program
#include<stdio.h>
int main(){ 
    long long int sum = 0;
    int n, i;
    printf("Enter Any Integer Number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        sum = sum + i;
    } 
    printf("1 + 2 + 3 + 4........+N = %lld",sum);

    return 0;
}