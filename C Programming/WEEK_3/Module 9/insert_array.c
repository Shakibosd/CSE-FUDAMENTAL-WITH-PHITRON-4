
// array insert value
#include <stdio.h>
int main(){
    //user input
    int n;
    scanf("%d",&n);
    int ar[n+1];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    //position and value set
    int pos, val;
    scanf("%d %d",&pos ,&val);
    for(int i=n; i>=pos+1; i--){
        ar[i] = ar[i-1];
    } 
    ar[pos] = val;
    //print array
    for(int i=0; i<=n; i++){
        printf("%d ",ar[i]);
    }
    return 0;
}
