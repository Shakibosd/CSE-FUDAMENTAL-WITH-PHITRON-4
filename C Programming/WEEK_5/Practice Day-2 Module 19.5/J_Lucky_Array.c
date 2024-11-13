/*Given a number N and an array A of N numbers. Determine if the array is lucky or not.

Note: the array is lucky if the frequency (number of occurrence) of the minimum element is odd.

Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers ( - 105 ≤ Ai ≤ 105).

Output
Print "Lucky" (without quotes) if the frequency of the minimum element is odd, otherwise print "Unlucky"(without quotes).

Examples
input
5
8 8 9 5 9
output
Lucky
input
5
3 3 3 5 3
output
Unlucky
Note
First Example :

minimum element is 5 and its frequency is 1 and it's ODD so the array is lucky.

Second Example :

minimum element is 3 and its frequency is 4 and it's EVEN so the array is not lucky.*/ 

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int min=a[0], count=0;
    for(int i=1; i<n; i++){
        if(a[i]<min){
            min=a[i];
            count=0;
        }
        else if(a[i]==min){
            count++;
        }
    }
    if(count%2==0){
        printf("Lucky\n");
    }
    else{
        printf("Unlucky\n");
    }
    getch();
    return 0;
}
