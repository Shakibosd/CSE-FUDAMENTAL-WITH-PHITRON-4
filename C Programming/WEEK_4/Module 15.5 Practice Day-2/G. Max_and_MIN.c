/*#include <stdio.h>
#include <string.h>
int main(){
    int n, i;
    scanf("%d",&n);
    int ar[n];
    for(i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    int min = ar[0], max = ar[0];
    for(i=0; i<n; i++){
        if(ar[i] > max){
            max = ar[i];
        }
        else if(ar[i] < min){
            min = ar[i];
        }
    }
    printf("%d %d",max ,min);
    return 0;
}*/


/*Given an array A of size N. Print the minimum and the maximum number in the array.

Note: Solve this problem using function.

Input
First line will contain a number N (1 ≤ N ≤ 103) number of elements.

Second line will contain N numbers (0 ≤ Xi ≤ 105).

Output
Print the minimum and the maximum number separated by a space.

Example
input
5
10 13 95 1 3
output
1 95*/

#include <stdio.h>
void max_and_min(void){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    int min=ar[0],max=ar[0];
    for(int i=1; i<n; i++){
        if(ar[i]<min){
           min=ar[i];
        }
        else if(ar[i]>max){
            max=ar[i];
        }
    }
    printf("%d %d",min,max);
}
int main(){
    max_and_min();
    return 0;
}