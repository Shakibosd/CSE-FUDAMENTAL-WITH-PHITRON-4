
/*Problem Statement

You will be given a positive integer N and N numbers after that. You need to tell the sum of positive numbers and the sum of negative numbers separated by a space.

Input Format

First line will contain N.
Second line will contain N values named V.
Constraints

1 <= N <= 10^5
-1000 <= V <= 1000
Output Format

Output the sum of positive numbers first, then sum of negative numbers.
Sample Input 0

6
5 -3 9 -10 2 8 
Sample Output 0

24 -13
Sample Input 1

4
1 0 -5 3
Sample Output 1

4 -5*/
#include <stdio.h>
#include <string.h>
int main(){
    int n, i, pos = 0, neg = 0;
    scanf("%d",&n);
    int ar[n];
    for(i=1; i<=n; i++){
        scanf("%d",&ar[i]);
        if(ar[i] > 0){
            pos = pos + ar[i];
        }
        else if(ar[i] < 0){
            neg = neg + ar[i];
        }
    }
    printf("%d %d",pos ,neg);
    return 0;
}
