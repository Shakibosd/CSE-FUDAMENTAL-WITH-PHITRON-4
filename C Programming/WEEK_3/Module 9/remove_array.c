
//array index remove program
#include <stdio.h>
int main(){
    //array user input
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    // position set
    int pos;
    scanf("%d",&pos);
    for(int i=pos; i<n-1; i++){
        ar[i] = ar[i+1];
    }
    // print
    for(int i=0; i<n-1; i++){
        printf("%d ",ar[i]);
    }
    return 0;
}