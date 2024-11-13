
// Write a program first index copy to secoend index in array
#include <stdio.h>
int main(){
    //Enter First Input
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    //Enter Second Input
    int m;
    scanf("%d",&m);
    int b[m];
    for(int j=0; j<m; j++){
        scanf("%d",&b[j]);
    }
    //A Index Copy To Ans 
    int ans[n+m];
    for(int i=0; i<n; i++){
        ans[i]=a[i];
    }
    //B Index Copy To Ans 
    int i=n;
    for(int j=0; j<m; j++){
        ans[i]=b[j];
        i++;
    }
    //Print Array
    for(int i=0; i<n+m; i++){
        printf("%d ",ans[i]);
    }
    return 0;
}