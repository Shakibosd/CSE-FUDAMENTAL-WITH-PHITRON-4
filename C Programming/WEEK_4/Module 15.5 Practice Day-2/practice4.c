/*Make a function named change_it() which receives an array of integers and the size of that integer. In the function you need to change the value of the last index of that array and assign 100 there. You don’t need to return anything. After that print the array in the main function and see if it is updated.
Sample Input
5
10 20 30 40 50
4 100
Sample Output
10 20 30 40 100

Sample Input
3
1 2 3
2 100
Sample Output
1 2 100*/

#include <stdio.h>
#include <string.h>
int main(){
    int n, i;
    scanf("%d",&n);
    int ar[n];
    for(i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    int x, v;
    scanf("%d %d",&x ,&v);
    if(x>0 || x<n){
        ar[x]=v;
    }
    for(i=0; i<n; i++){
        printf("%d ",ar[i]);
    }
    return 0;
}


/*#include <stdio.h>
void fun(void){
     int n,i,x,v;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    scanf("%d %d",&x,&v);
    if(x>0 || x<n){
        a[x]=v;
    }
    for(i=0; i<n; i++){
        printf("%d ",a[i]);
    }
}
int main(){
     fun();
    return 0;
}*/