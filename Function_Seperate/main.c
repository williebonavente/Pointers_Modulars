#include <stdio.h>
#include "seperateme.h"
// Demonstrate the use of a function with input and output parameters.

int main(void)
{
    double value; // input - number to analyze
    char sn;      // output - sign of value
    int whl;      // output - whole number magnitude of value
    double fr;    // output - fractional part of value

    // Gets data
    printf("Enter a value to analyze > ");
    scanf("%lf", &value);

    // Separates data value into three parts
    separate(value, &sn, &whl, &fr);
    // Prints Result
    printf("Parts of %.4f\n sign: %c\n", value, sn);
    printf(" whole number magnitude: %d\n", whl);
    printf(" fractional part:  %.4f\n", fr);

    return 0;
}