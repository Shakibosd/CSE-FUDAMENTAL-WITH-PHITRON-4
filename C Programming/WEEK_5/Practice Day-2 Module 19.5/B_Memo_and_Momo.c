/*Memo and Momo are playing a game. Memo will choose a positive number a
, and Momo will choose a positive number b
.

Your task is to tell them who will win according to the following rules:

If both a
 and b
 are divisible by k
, both of them win and you should print "Both".
If a
 is divisible by k
 but b
 isn't, Memo wins and you should print "Memo".
If b
 is divisible by k
 but a
 isn't, Momo wins and you should print "Momo".
If both a
 and b
 are not divisible by k
, no one wins and you should print "No One".
Input
Only one line containing three positive numbers a
, b
 and k
 (1≤a,b,k≤1018
).

Output
Print the answer as described in the statement.

Examples
input
15 7 3
output
Memo
input
22 10 2
output
Both
*/

/*#include <stdio.h>
int main(){
   long long int a, b, k;
   scanf("%lld%lld%lld",&a ,&b ,&k);
   if(a%k==0 && b%k==0){
      printf("Both\n");
   }
   else if(a%k==0 && b%k!=0){
      printf("Memo\n");
   }
   else if(a%k!=0 && b%k==0){
      printf("Momo\n");
   }
   else{
      printf("No One\n");
   }
   return 0;
}*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
    long long int a, b, k;
    scanf("%lld %lld %lld",&a ,&b ,&k);
    if(a%k==0 && b%k==0){
       printf("Both\n");
    }
    else if(a%k==0 && b%k!=0){
       printf("Memo\n");
    }
    else if(b%k!=0 && b%k==0){
       printf("Momo\n");
    }
    else{
       printf("No One\n");
    }
    getch();
    return 0;
}
