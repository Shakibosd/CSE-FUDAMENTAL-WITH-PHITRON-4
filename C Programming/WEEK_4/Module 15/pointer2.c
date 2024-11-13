
#include <stdio.h>
int main(){
    double x=10.4;
    double * ptr=&x;
    //*ptr=21.23;
    double *ptr2=ptr;
    *ptr2=23.54;
    printf("%0.2lf\n",*ptr);
    printf("%0.2lf\n",x);
    printf("%0.2lf\n",*ptr2);
    return 0;
}