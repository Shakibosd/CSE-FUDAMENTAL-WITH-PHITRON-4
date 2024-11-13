/*
Problem Statement
Jingle Bells, Jingle Bells - It's Christmas today! Ranja, our little friend, is all excited, but there's just one thing missing: a Christmas tree.

Ranja will provide us with the size of the tree, N, and we'll work our holiday magic to print out that perfect tree. Let's make Ranja's Christmas tree dreams come true!

You should see the sample input output to understand how the tree looks like.

Input Format

Input will contain only N.
Constraints

1 <= N <= 21 ; and N is odd.
Output Format

Output the tree of size N.
Sample Input 0

1
Sample Output 0

     *
    ***
   *****
  *******
 *********
***********
     *
     *
     *
     *
     *
Sample Input 1

3
Sample Output 1

      *
     ***
    *****
   *******
  *********
 ***********
*************
     ***
     ***
     ***
     ***
     ***
Sample Input 2

5
Sample Output 2

       *
      ***
     *****
    *******
   *********
  ***********
 *************
***************
     *****
     *****
     *****
     *****
     *****
*/
#include <stdio.h>
int main(){
int n, s, k;
    scanf("%d",&n);
    s=n-1,k=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=s; j++){
            printf(" ");
        }
        for(int j=1; j<=k; j++){
            printf("*");
        }
        s--;
        k=k+2;
        printf("\n");
    }
    for(int i=1; i<=5; i++){  
        for(int j=1; j<=n-1; j++){
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}

