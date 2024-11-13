
/*Given 2 numbers N, M
 and an array A of N
 numbers. For every number from 1 to M,print how many times this number appears in this array.

Input
First line contains two numbers N, M
 (1≤N≤105,1≤M≤105).

Second line contains N
 numbers (1≤Ai≤M).

Output
Print M
 lines, the ith
 line should contain number of times that the number i
 appears in A
Example
input
10 5
1 2 3 4 5 3 2 1 5 3
output
2
2
3
1
2*/

#include <stdio.h>
#include <string.h>
int main(){
    int n, m;
    scanf("%d %d",&n ,&m);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int cnt[26]={0};
    for(int i=0; i<n; i++){
        int val=a[i]++;
        cnt[val]++;
    }
    for(int i=1; i<=m; i++){
        printf("%d\n",cnt[i]);
    }
    return 0;
}





 