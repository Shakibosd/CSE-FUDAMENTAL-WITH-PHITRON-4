
/*Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".

Input
Only one line containing two numbers A, B (1  ≤  A, B  ≤  106)

Output
Print the "Multiples" or "No Multiples" corresponding to the read numbers.*/

/*#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a ,&b);
    if(a%b == 0){
        printf("Multiples\n");
    }    
    else if(b%a == 0){
        printf("Multiples\n");
    }
    else{
        printf("No Multiples\n");
    }
    return 0;
}*/



#include <stdio.h>
int main(){
    while(1){
        int a,b;
        scanf("%d %d",&a ,&b);
        if(a%b == 0){
            printf("Multiples\n");
        }
        else if(b%a == 0){
            printf("Multiples\n");
        }
        else{
            printf("No Multiples\n");
        }
    }
    return 0;
}