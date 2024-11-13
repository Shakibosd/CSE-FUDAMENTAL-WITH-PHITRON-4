
/*Given a number N, and N numbers, find maximum number in these N numbers.

Input
First line contains a number N (1 ≤ N ≤ 103).

Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

Output
Print the maximum number.*/

//problem


/*#include <stdio.h>
#include <limits.h>
int main(){
    int n, i, a, maximum=INT_MIN, minimum=INT_MAX;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d",&a);
        if(a<minimum){
            minimum = a;
        }
        if(a>maximum){
            maximum = a;
        }
    }
    printf("%d %d",minimum,maximum);
    return 0;
}*/



#include <stdio.h>
#include <limits.h>
int main(){
    int n, i, a, max=INT_MIN, min=INT_MAX;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d",&a);
        if(a<min){
            min=a;
        }
        else if(a>max){
            max=a;
        }
    }
    printf("%d %d",min,max);
    return 0;
}