
#include <stdio.h>
void func(int ar[],int n){
    ar[0]=7;
}
int main(){
    int ar[5]={1,2,3,4,5};
    func(ar,5);
    for(int i=0; i<5; i++){
        printf("%d ",ar[i]);
    }
    return 0;
}