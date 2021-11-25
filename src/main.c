#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#include "clear.h"

void main() {
    printf("-----------------------------------\n\n");
    printf("              Calcualtor\n\n");
    printf("-----------------------------------\n");
    
    int num;
    int num2;
    printf("Write first number >> ");
    scanf("%d", &num);
    printf("Write second number >> ");
    scanf("%d", &num2);

    int add = num + num2;
    int sub = num - num2;
    int div = num / num2;
    int mul = num * num2;
    int spow = pow(num, num2);
    int ssqrt1 = sqrt(num);
    int ssqrt2 = sqrt(num2);
    cls();
    printf("\n----------------------------------------------------");
    printf("\nAdd first number with second number:         |  %d", add);
    printf("\nSubstract first number with second number:   |  %d", sub);
    printf("\nMultiple first number with second number:    |  %d", mul);
    printf("\nDivide first number with second number:      |  %d", div);
    printf("\n----------------------------------------------------");
    printf("\nPower first number with second number:       |  %d", spow);
    printf("\nSqrt first number:                           |  %d", ssqrt1);
    printf("\nSqrt second number:                          |  %d", ssqrt2);
    printf("\n----------------------------------------------------");

}