
#include <stdio.h>
int main(){
    //user input
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    //value count
    int count[7]={0};
    for(int i=0; i<n; i++){
        int value = ar[i];
        count[value]++;
    }
    //print
    for(int i=0; i<=6; i++){
        printf("%d - %d\n",i,count[i]);
    }
    return 0;
}