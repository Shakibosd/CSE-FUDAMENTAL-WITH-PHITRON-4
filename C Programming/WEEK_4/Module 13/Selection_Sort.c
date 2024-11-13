
// Ascending 
// Small-Big 
// 5
// 2 4 5 3 1
// 1 2 3 4 5

/*#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(ar[i]>ar[j]){
                int temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ",ar[i]);
    }
    return 0;
}*/




// Dscending 
// Big-Small 
// 5
// 4 5 3 1 2
// 5 4 3 2 1
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(ar[i]<ar[j]){
                int temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ",ar[i]);
    }
    return 0;
}



