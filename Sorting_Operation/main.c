/*
Test function order by ordering three numbers
*/

#include <stdio.h>
#include "sortme.h"

int main(void)
{
    double num1, num2, num3; // three numbers to put in order

    // Gets test data
    printf("Enter three numbers separated by blank > ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    // Orders the three numbers
    
    // INPUTTED NUMBERS > 12 , 31,  5
    order(&num1, &num2); // 12, 31 
    order(&num1, &num3); // 5, 12
    order(&num2, &num3); // 5, 31

    // Display the result
    printf("The numbers in ascending order are : %.2f %.2f %.2f\n", num1, num2, num3);

    return 0;
}