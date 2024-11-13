
/*The Egyptian football team will be in Russia for the World Cup. Of course, they all would like to buy souvenirs for their families. Luckily, they met the king of souvenirs Matryoshka who is famous for his masterpiece Katryoshka. He makes it using different wooden pieces: eyes, mouths and bodies. He can form a nice Katryoshka using one of the following combinations:

Two eyes and one body.
Two eyes, one mouth, and one body.
One eye, one mouth, and one body.
If the king has n
 eyes, m
 mouths and k
 bodies, what is the largest number of Katryoshkas he can make?
Input
Only one line containing three numbers n, m and k
 (0≤n,m,k≤1018) – the number of eyes, mouths and bodies respectively.

Output
Print the largest number of Katryoshkas he can make.

Examples
input
1 2 3
output
1
input
0 11 2
output
0
input
90 24 89
output
57*/

#include <stdio.h>
#include <string.h>
int main(){
    long long int e, m, b, res=0;
    scanf("%lld %lld %lld",&e ,&m ,&b);
    if(e==0 || b==0){
        printf("0");
    }
    else{
        long long int mn = e;
        if(m < mn){
            mn = m;
        }
        if(b < mn){
            mn = b;
        }
        res = res + mn;
        e = e - mn;
        m = m - mn;
        b = b - mn;
        if(e/2 < b){
            res = res + e/2;
        }
        else{
            res = res + b;
        }
        printf("%lld\n",res);
    }
    return 0;
}
