
/*
  5 3
  1 2 3
  4 5 6
  7 8 9
  10 11 12
  13 14 15*/
#include <stdio.h>
int main(){
   int row, col;
   scanf("%d %d",&row ,&col);
   int a[row][col];
   for(int i=0; i<row; i++){
     for(int j=0; j<col; j++){
        scanf("%d",&a[i][j]);
     }
   }
   //row er value print 
   int c;
   scanf("%d",&c);
   for(int i=0; i<col; i++){
      printf("%d ",a[c][i]);
   }
   //col er value print
   int e;
   scanf("%d",&e);
   for(int i=0; i<row; i++){
      printf("%d ",a[i][e]);
   }
   return 0;
}