
/*Given a number N and an array A of N numbers. Determine if the number X exists in array A or not and print its position (0-index).

Note: X may be found once or more than once and may not be found.

Input
First line contains a number N (1 ≤ N ≤ 105) number of elements.

Second line contains N numbers (0 ≤ Ai ≤ 109).

Third line contains a number X (0 ≤ X ≤ 109).

Output
Print the position of X in the first time you find it. If it doesn't exist print -1.

Examples
input
3
3 0 1
0
output
1
input
5
1 3 0 4 5
10
output
-1
input
4
2 3 2 1
2
output
0*/

#include <stdio.h>
#include <string.h>
int main(){
    int n, i;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int x, ans = -1;
    scanf("%d",&x);
    for(i=0; i<n; i++){
        if(a[i] == x){
            ans = i;
            break;
        }
    }
    printf("%d\n",ans);
    return 0;
}
