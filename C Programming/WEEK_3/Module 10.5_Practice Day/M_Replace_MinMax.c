
/*Given a number N and an array A of N numbers. Print the array after doing the following operations:

Find minimum number in these numbers.
Find maximum number in these numbers.
Swap minimum number with maximum number.
Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers ( - 105 ≤ Ai ≤ 105)

It's guaranteed that all numbers are distinct.

Output
Print the array after the replacement operation.

Example
input
5
4 1 3 10 8
output
4 10 3 1 8 */

/*#include <stdio.h>
#include <limits.h>
int main(){
    //user input
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    //min max value set
    int min=INT_MAX, max=INT_MIN, pos1=0, pos2=0;
    for(int i=0; i<n; i++){
        if(ar[i]<min){
            min = ar[i];
            pos1 = i;
        }
        else if(ar[i]>max){
            max = ar[i];
            pos2 = i; 
        }
    }
    //swap
    int temp=ar[pos1];
    ar[pos1]= ar[pos2];
    ar[pos2]=temp;
    //print
    for(int i=0; i<n; i++){
        printf("%d ",ar[i]);
    }
    return 0;
}*/
#include <stdio.h>
#include <limits.h>
int main(){
    int n, i;
    scanf("%d",&n);
    int ar[n];
    for(i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    int min = INT_MAX, max = INT_MIN, pos1 = 0, pos2 = 0;
    for(i=0; i<n; i++){
        if(ar[i] < min){
            min = ar[i];
            pos1 = i;
        }
        else if(ar[i] > max){
            max = ar[i];
            pos2 = i;
        }
    }
    int temp = ar[pos1];
    ar[pos1] = ar[pos2];
    ar[pos2] = temp;
    for(i=0; i<n; i++){
        printf("%d ",ar[i]);
    } 
    return 0;
}
