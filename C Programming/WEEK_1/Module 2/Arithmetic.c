
#include<stdio.h>
int main(){
    // Addition
    int number1 = 20, number2 = 7, addition; // Initialization
    addition = number1 + number2;
    printf("Addition = %d\n",addition);

    // Subtraction
    int subtraction = number1 - number2;
    printf("Subtraction = %d\n",subtraction);

    // Multiplication
    int multiplication = number1 * number2;
    printf("Multiplication = %d\n",multiplication);

    // Division
    float division = number1*1.0 / number2;
    printf("Division = %0.3f\n",division);

    // Modulus
    int modulus = number1 % number2;
    printf("Modulus = %d\n",modulus);

    return 0;
}


