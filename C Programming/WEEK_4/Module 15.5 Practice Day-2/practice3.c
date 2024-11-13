
/*Write a function named count_odd() which receives an array of integers and the size of that array and counts the number of odd elements in that array and returns that. Call that function in the main function and print the count there.
Sample Input
Sample Output
5
1 5 4 10 2
2*/

/*#include <stdio.h>
#include <string.h>
int main(){
    int n, i;
    scanf("%d",&n);
    int ar[n];
    for(i=1; i<=n; i++){
        scanf("%d",&ar[i]);
    }
    int count=0;
    for(i=0; i<n; i++){
        if(ar[i]%2!=0){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}*/


#include <stdio.h>
void fun(void){
    int n,i,count=0;
    scanf("%d",&n);
    int ar[n];
    for(int i=1; i<=n; i++){
        scanf("%d",&ar[i]);
    }
    for(int i=0; i<n; i++){
        if(ar[i]%2!=0){
            count++;
        }
    }
    printf("%d\n",count);
}
int main(){
    fun();
    return 0;
}