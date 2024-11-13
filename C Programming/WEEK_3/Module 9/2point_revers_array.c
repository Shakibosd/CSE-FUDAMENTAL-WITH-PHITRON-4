
//2 point revers in array
#include <stdio.h>
int main(){
    //array uaer input
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    //loop
    int i=0, j=n-1;
    while(i<j){
        int temp=ar[i];
        ar[i]=ar[j];
        ar[j]=temp;
        i++;
        j--;
    }
    //array print
    for(int i=0; i<n; i++){
        printf("%d ",ar[i]);
    }
    return 0;
}