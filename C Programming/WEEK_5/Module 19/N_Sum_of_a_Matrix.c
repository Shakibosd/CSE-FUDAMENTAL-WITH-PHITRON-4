
/*Given two matrices A and B of size R * C. Print the summation of A and B.

Input
First line contains two numbers R and C (1 ≤ R, C ≤ 100). number of rows and number of columns respectively.

Next R lines will contain C numbers ( - 100 ≤ Ai, j ≤ 100) matrix A numbers.

Next R lines will contain C numbers ( - 100 ≤ Bi, j ≤ 100) matrix B numbers.

Output
Print the summation result.

Example
input
2 3
1 2 3
4 5 6
1 3 5
7 9 11
output
2 5 8
11 14 17*/

#include <stdio.h>
#include <string.h>
int main(){
    int row, col;
    scanf("%d %d",&row ,&col);
    int a[row][col], b[row][col], c[row][col];
    for(int i=0; i<row; i++){
       for(int j=0; j<col; j++){
          scanf("%d",&a[i][j]);
       }
    }
    for(int i=0; i<row; i++){
       for(int j=0; j<col; j++){
          scanf("%d",&b[i][j]);
       }
    }
    for(int i=0; i<row; i++){
       for(int j=0; j<col; j++){
          c[i][j] = a[i][j] + b[i][j];
       }
    }
    for(int i=0; i<row; i++){
       for(int j=0; j<col; j++){
          printf("%d ",c[i][j]);
       }
       printf("\n");
    }
    return 0;
}
