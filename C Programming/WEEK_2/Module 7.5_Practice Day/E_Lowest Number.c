
/*Given a number N and an array A of N numbers. Print the lowest number and its position.

Note: if there are more than one answer print first one's position.

Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-105  ≤  Ai  ≤  105).

Output
Print the lowest number and its position (1-index).

Examples
input
3
1 2 3
output
1 1
input
5
5 6 2 3 2
output
2 3*/

#include <stdio.h>
#include <limits.h>
int main(){
    int n, i;
    scanf("%d",&n);
    int ar[n];
    for(i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }    
    int min = INT_MAX, pos = 0;
    for(i=0; i<n; i++){
        if(ar[i] < min){
            min = ar[i];
            pos = i + 1;
        }
    }
    printf("%d %d",min ,pos);
    return 0;
}
