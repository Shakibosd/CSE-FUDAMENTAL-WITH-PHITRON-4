// primary diagonal
/*2 0 0         
  0 5 0
  0 0 3*/

//secondary diagonal
/*0 0 1
  0 5 0
  3 0 0*/

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
   int flag=1;
   if(row!=col){
      flag = 0;
   }
   for(int i=0; i<row; i++){
      for(int j=0; j<col; j++){
         if(i==j){ //i+j==row-1 secondary diagonal matrix
            continue;
         }
         if(a[i][j] != 0){
            flag = 0;
         }
      }
   }
   if(flag==1){
      printf("Primary Diagonal");
      //printf("secondary diagonal matrix");
   }
   else{
      printf("Not Primary diagonal");
      //printf("Not secondary diagonal matrix");
   }
   return 0;
}