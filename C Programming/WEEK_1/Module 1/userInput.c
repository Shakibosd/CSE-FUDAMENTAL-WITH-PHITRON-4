
#include <stdio.h>
int main(){
    // User Input
    int a;
    float b;
    char c;
    printf("Enter Any Integer & Float & Character = ");
    scanf("%d %f %c",&a ,&b, &c);
    printf("%d\n%0.2f\n%c\n",a,b,c);

    // % User Input
    int f, g;
    printf("Integer%% = ");
    scanf("%d%% %d%%",&f ,&g);
    printf("Integer%% =  %d%% %d%%",f ,g);


    /*int h, i;
    char p;
    printf("Enter Integer%% = ");
    scanf("%d%c %d%c",&h,&p,&i,&p);
    printf("Integer%% =  %d%% %d%%",h,i);*/

    return 0;
}

