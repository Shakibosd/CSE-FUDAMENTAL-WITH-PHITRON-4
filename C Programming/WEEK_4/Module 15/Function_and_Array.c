
/*#include <stdio.h>
void funk(int ar[],int n){// *ar
    for(int i=0; i<n; i++){
        printf("%d ",ar[i]);
    }
}
int main(){
    int ar[5]={10,20,30,40,50};
    funk(ar,5);
    return 0;
}*/
#include <stdio.h>
void funk(double ar[],int n){// *ar
    for(int i=0; i<n; i++){
        printf("%0.1lf ",ar[i]);
    }
}
int main(){
    double ar[5]={10.5,20.6,30.7,40.8,50.9};
    funk(ar,5);
    return 0;
}